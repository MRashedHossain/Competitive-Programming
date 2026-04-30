#include<bits/stdc++.h>
using namespace std;
 
#define RASHED ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
#define endl "\n"
#define int long long int
 
#define show(x) cout << #x << " = " << x << endl
#define inf (int)1e17
#define maxn 100010
 
#define all(x) (x.begin(),x.end())
#define rall(x) (x.rbegin(),x.rend())
#define sz(x) (x.size())
 
#define F first
#define S second
 
void solve(int tc) {
    int l,v0,t,n;cin>>l>>v0>>t>>n;
    vector<int> res(n+2,1);
    for(int i=1;i<=n;i++){
        int ti,vi;cin>>ti>>vi;
        int tt = t-ti,vv = abs(v0-vi);
        res[i] += (tt*vv)/l;
    }
    for(int i=1;i<=n;i++){
        if(i == n)cout<<res[i];
        else cout<<res[i]<<" ";
    }
}
signed main() {
    RASHED
    int TC = 1;
    cin>>TC;
    for(int i=1; i<=TC; i++){
        solve(i);
        if(i < TC)cout<<endl;
    }
    return 0;
}
/**
CASES:
 
*/
 
 