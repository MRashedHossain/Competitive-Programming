#include<bits/stdc++.h>
#define ll long long int
using namespace std;
 
ll n;
vector<ll> v;
 
void clean()
{
    v.clear();
    n = 0;
}
 
bool is_solvable(ll x)
{
    ll person = 1, pos = v[0]+x;
    for (int i=0 ; i<n ; i++){
        if (abs(v[i]-pos) > x){
            pos = v[i]+x;
            person++;
        }
    }
    return (person<=3);
}
 
ll bs()
{
    ll b = 0 , e = 1000000009, ans = 1000000009;
    while(b<=e){
        ll mid = (b+e)/2;
        if (is_solvable(mid)){
            ans = min(mid,ans);
            e = mid-1;
        }
        else {
            b = mid+1;
        }
    }
    return ans;
}
 
int main()
{
    int tc;
    cin >> tc;
    while(tc--){
        clean();
 
        cin >> n;
        for (int i=0 ; i<n ; i++){
            ll a;
            cin >> a;
            v.push_back(a);
        }
 
        sort(v.begin(),v.end());
 
        cout << bs() << endl;
    }
 
    return 0;
}