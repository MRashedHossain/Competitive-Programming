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
 
int vis[1002][1002],g[1002][1002],n,m;
int dx[5] = {0,0,1,-1};
int dy[5] = {1,-1,0,0};
 
bool valid(int i,int j){
    return (i >= 1 && i <= n && j >= 1 && j <= m);
}
 
int dfs(int u,int v){
    vis[u][v]++;
    int curr = 0;
    for(int i=0;i<4;i++){
        int uu = u+dx[i],vv = v+dy[i];
        if(valid(uu,vv) && !vis[uu][vv] && g[uu][vv] != 0)curr += dfs(uu,vv);
    }
    return g[u][v]+curr;
}
 
void solve(int tc) {
    cin>>n>>m;
    int res = 0;
 
    for(int i=1;i<=n;i++)for(int j=1;j<=m;j++)cin>>g[i][j];
    for(int i=1;i<=n;i++){
        for(int j=1;j<=m;j++){
            if(!vis[i][j] && g[i][j]){
                res = max(res,dfs(i,j));
            }
        }
    }
    cout<<res<<endl;
    for(int i=1;i<=n;i++)for(int j=1;j<=m;j++)vis[i][j] = 0;
}
signed main() {
    RASHED
    int TC = 1;
    cin>>TC;
    memset(vis,0,sizeof(vis));
    for(int i=1; i<=TC; i++)solve(i);
    return 0;
}
/**
CASES:
 
*/
 
 
 
 