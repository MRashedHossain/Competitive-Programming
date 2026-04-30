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
 
int n,m,vis[1002][1002];
char g[1002][1002];
 
int dx[] = {-1,1,0,0};
int dy[] = {0,0,-1,1};
 
int dfs(int x,int y) {
    if(x < 1 || x > n || y < 1 || y > m)return 0;
    if(vis[x][y] == inf)return (vis[x][y] = 1);
    if(vis[x][y] != -1)return vis[x][y];
    vis[x][y] = inf;
    if(g[x][y] == '?') {
        for(int i=0; i<4; i++) {
            if(dfs(x+dx[i],y+dy[i]))return (vis[x][y] = 1);
        }
    return (vis[x][y] = 0);
    }
    int xx = x,yy = y;
    if(g[x][y] == 'U')xx--;
    else if(g[x][y] == 'D')xx++;
    else if(g[x][y] == 'L')yy--;
    else yy++;
    return (vis[x][y] = dfs(xx,yy));
}
void solve(int tc) {
    cin>>n>>m;
    for(int i=1; i<=n; i++)for(int j=1; j<=m; j++)cin>>g[i][j];
    for(int i=1; i<=n; i++)for(int j=1; j<=m; j++)vis[i][j] = -1;
    for(int i=1; i<=n; i++) {
        for(int j=1; j<=m; j++) {
            if(vis[i][j] == -1)dfs(i,j);
        }
    }
    int res = 0;
    for(int i=1; i<=n; i++) {
        for(int j=1; j<=m; j++) {
            if(vis[i][j] == 1)res++;
        }
    }
    cout<<res<<endl;
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
 