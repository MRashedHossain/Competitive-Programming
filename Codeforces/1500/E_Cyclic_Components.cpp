#include<bits/stdc++.h>
using namespace std;
 
#define RASHED ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
#define endl "\n"
#define int long long int
 
#define show(x) cout << #x << " = " << x << endl
#define inf (int)1e17
#define maxn 200010
 
#define F first
#define S second
 
int n,m,ccn = 1;
vector<int> g[maxn],vis(maxn,0);
unordered_map<int,vector<int>> cc;
 
void dfs(int u) {
    vis[u]++;
    cc[ccn].push_back(u);
    for(auto v:g[u]) {
        if(vis[v] == 0)dfs(v);
    }
}
 
int solve(int tc) {
    cin>>n>>m;
    for(int i=1; i<=m; i++) {
        int u,v;
        cin>>u>>v;
        g[u].push_back(v);
        g[v].push_back(u);
    }
    int res = 0;
    for(int i=1; i<=n; i++) {
        if(vis[i] == 0) {
            dfs(i);
            ccn++;
        }
    }
    for(int i=1; i<=ccn; i++) {
        bool found = true;
        for(int u:cc[i]) {
            if(g[u].size() != 2) {
                found = false;
                break;
            }
        }
        if(found && cc[i].size() > 2)res++;
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
 