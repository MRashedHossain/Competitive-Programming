#include<bits/stdc++.h>
using namespace std;
 
#define endl "\n"
#define RASHED ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
#define ll long long int
///#define inf 99999999999999999
///#define F first
///#define S second
///#define show(x) cout << #x << " : " << x << endl
///#define maxn 200100
 
void clean() {
 
}
ll solve() {
    ll n,ans = 0;cin>>n;
    vector<ll> f,s;
    while(n--){
        ll m;cin>>m;
        vector<ll>v;
        while(m--){
            ll x;cin>>x;
            v.push_back(x);
        }
        sort(v.begin(),v.end());
        f.push_back(v[0]);
        s.push_back(v[1]);
    }
    sort(f.begin(),f.end());
    sort(s.begin(),s.end());
    ans+=f[0];
    for(int i=1;i<s.size();i++)ans+=s[i];
    return ans;
}
int main() {
    RASHED
    int tc;
    cin>>tc;
    while(tc--) {
        cout<<solve()<<endl;
    }
    return 0;
}