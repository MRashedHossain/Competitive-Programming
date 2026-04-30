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
 
priority_queue<int,vector<int>,greater<int>> q;
vector<int> res,vis(maxn,0),g[maxn];
int n,m;
 
void solve(int tc) {
    cin>>n>>m;
    for(int i=1; i<=m; i++) {
        int u,v;
        cin>>u>>v;
        if(u == v)continue;
        g[u].push_back(v);
        g[v].push_back(u);
    }
    q.push(1);
    while(!q.empty()) {
        int u = q.top();
        q.pop();
        if(vis[u])continue;
        res.push_back(u);
        vis[u]++;
        for(auto v:g[u]) {
            if(!vis[v]) {
                q.push(v);
            }
        }
    }
    for(auto ii:res)cout<<ii<<" ";
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
 