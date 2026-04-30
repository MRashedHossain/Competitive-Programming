#include<bits/stdc++.h>
using namespace std;
 
#define RASHED ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
#define endl "\n"
#define int long long int
 
#define show(x) cout << #x << " = " << x << endl
#define inf (int)1e17
#define maxn 100010
 
#define F first
#define S second
 
void solve(int tc) {
    int x;cin>>x;
    vector<int> div;
    for(int i=1; i*i <= x+1; i++){
        if(x%i == 0){
            div.push_back(i);
            div.push_back(x/i);
        }
    }
    sort(div.begin(),div.end());
    int l = 1,r = x,curr = LLONG_MAX;
    for(int i=0,j=(int)div.size()-1;i<((int)div.size())/2;i++,j--){
        if(max(div[i],div[j]) < curr && lcm(div[i],div[j]) == x){
            l = div[i];
            r = div[j];
            curr = max(div[i],div[j]);
        }
    }
    cout<<l<<" "<<r<<endl;
}
signed main() {
    RASHED
    int TC = 1;
    //cin>>TC;
    for(int i=1; i<=TC; i++)solve(i);
    return 0;
}
/**
CASES:
 
*/