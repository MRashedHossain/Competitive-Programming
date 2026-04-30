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
 
bool solve(int tc) {
    int n;cin>>n;
    vector<int> g[n+2],dis(n+2,inf),vis(n+2,0),par(n+2,0);
    for(int i=0;i<n-1;i++){
        int u,v;cin>>u>>v;
        g[u].push_back(v);
        g[v].push_back(u);
    }
    queue<int> q;
    q.push(1);
    dis[1] = 0;
    while(!q.empty()){
        int u = q.front();
        q.pop();
        if(vis[u])continue;
        vis[u]++;
        for(auto v:g[u]){
            if(dis[v] > dis[u]+1){
                dis[v] = dis[u]+1;
                q.push(v);
                par[v] = u;
            }
        }
    }
    vector<int> f(n+2,0),v(n+2),res;
    for(int i=1;i<=n;i++){
        cin>>v[i];
        f[v[i]] = i;
    }
    if(v[1] != 1)return false;
    int pre = 1;
    for(int i=1;i<=n;i++){
        res.push_back(f[par[v[i]]]);
    }
    for(int i=1;i<n;i++){
        if(res[i] < res[i-1])return false;
    }
    return true;
}
signed main() {
    RASHED
    int TC = 1;
    //cin>>TC;
    for(int i=1; i<=TC; i++)cout<<(solve(i)?"Yes":"No")<<endl;
    return 0;
}
/**
CASES:
 
*/
 