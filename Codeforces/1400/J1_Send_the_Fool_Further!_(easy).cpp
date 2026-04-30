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
 
vector<int> g[105],dis(105,0),vis(105,0);
int cst[102][102];
 
int dfs(int from,int node) {
    vis[node]++;
    if(g[node].size() == 1 && node != from)return (dis[node] = cst[from][node]);
    int cost = 0;
    for(auto v:g[node]) {
        if(!vis[v])cost = max(cost,dfs(node,v)+cst[from][node]);
    }
    return (dis[node] = cost);
}
void solve(int tc) {
    int n;
    cin>>n;
    for(int i=1; i<n; i++) {
        int u,v,w;
        cin>>u>>v>>w;
        g[u].push_back(v);
        g[v].push_back(u);
        cst[u][v] = w;
        cst[v][u] = w;
    }
    dfs(0,0);
    cout<<dis[0];
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
 