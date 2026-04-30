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
 
int cst[102][102],vis[102][102],n;
 
int dfs(int tar,int from,int curr) {
    vis[tar][curr]++;
    if(tar == curr)return 0;
    int cost = inf;
    for(int i=1; i<=n; i++) {
        if(cst[curr][i] != inf && vis[tar][i] == 0 && from != i) cost = min(cost,dfs(tar,curr,i)+cst[curr][i]);
    }
    return cost;
}
void solve(int tc) {
    cin>>n;
    for(int i=1; i<=n; i++)for(int j=1; j<=n; j++){cst[i][j] = inf,vis[i][j] = 0;}
    for(int i=1; i<=n; i++) {
        int u,v,w;
        cin>>u>>v>>w;
        cst[u][v] = 0;
        cst[v][u] = w;
    }
    int res = inf;
    for(int i=1; i<=n; i++) {
        for(int j=1; j<=n; j++) {
            if(cst[i][j] != inf && vis[i][j] == 0) res = min(res,dfs(i,i,j)+cst[i][j]);
        }
    }
    cout<<res<<endl;
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
 