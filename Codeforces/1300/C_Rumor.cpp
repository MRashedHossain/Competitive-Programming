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
 
int n,m;
vector<int> g[maxn],vis(maxn,0),dis(maxn);
 
int dfs(int src,int u) {
    vis[u]++;
    if(g[u].empty() || (g[u].size() == 1 && u != src))return dis[u];
    int res = dis[u];
    for(auto v:g[u]) {
        if(vis[v] == 0) res = min(res,min(dis[v],dfs(src,v)));
    }
    return res;
}
 
int solve(int tc) {
    cin>>n>>m;
    for(int i=1; i<=n; i++)cin>>dis[i];
    for(int i=1; i<=m; i++) {
        int u,v;
        cin>>u>>v;
        g[u].push_back(v);
        g[v].push_back(u);
    }
    int res = 0;
    for(int i=1; i<=n; i++) {
        if(vis[i] == 0)res += dfs(i,i);
    }
    return res;
}
signed main() {
    RASHED
    int TC = 1;
    //cin>>TC;
    for(int i=1; i<=TC; i++)cout<<solve(i)<<endl;
    return 0;
}
/**
CASES:
 
*/