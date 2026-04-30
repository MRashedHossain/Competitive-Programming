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
    int n;cin>>n;
    vector<int> g[n+4],sz(n+4,0),bot(n+4,0);
    for(int i=0;i<n-1;i++){
        int u,v;cin>>u>>v;
        g[u].push_back(v);
        g[v].push_back(u);
        sz[u]++;sz[v]++;
    }
    int leaf = 0;
    for(int i=1;i<=n;i++){
        if(sz[i] == 1){
            bot[i] = 1;
            leaf++;
        }
    }
    int res = 0;
    for(int i=1;i<=n;i++){
        int curr = bot[i];
        for(auto j:g[i])if(bot[j])curr++;
        res = max(res,curr);
    }
    cout<<max(0LL,leaf - res)<<endl;
}
signed main() {
    RASHED
    int TC = 1;
    cin>>TC;
    for(int i=1; i<=TC; i++)solve(i);
    return 0;
}
/**
CASES:
 
*/
 