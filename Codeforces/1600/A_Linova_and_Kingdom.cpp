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
 
int n,k;
vector<int> g[maxn],lvl(maxn,inf),baccha(maxn,0),dfsvis(maxn,0),bfsvis(maxn,0),par(maxn,0);
 
int dfs(int u) {
    dfsvis[u]++;
    if(g[u].size() == 1 && u != 1)return (baccha[u] = 1);
    int his_child = 1;
    for(auto v:g[u]) {
        if(dfsvis[v] == 0) {
            his_child += dfs(v);
        }
    }
    return (baccha[u] = his_child);
}
 
void bfs(int src) {
    queue<int> q;
    q.push(src);
    lvl[src] = 0;
    par[src] = 0;
    while(!q.empty()) {
        int u = q.front();
        q.pop();
        if(bfsvis[u])continue;
        bfsvis[u]++;
        for(auto v:g[u]) {
            if(lvl[v] > lvl[u] + 1) {
                lvl[v] = lvl[u] + 1;
                par[v] = u;
                q.push(v);
            }
        }
    }
}
 
int solve(int tc) {
    cin>>n>>k;
    for(int i=1; i<n; i++) {
        int u,v;
        cin>>u>>v;
        g[u].push_back(v);
        g[v].push_back(u);
    }
    dfs(1);
    bfs(1);
    vector<int> v;
    for(int i=2;i<=n;i++){
        v.push_back(lvl[i] - baccha[i] + 1);
    }
    sort(v.rbegin(),v.rend());
    int res = 0;
    for(int i=0;i<k;i++)res += v[i];
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
 