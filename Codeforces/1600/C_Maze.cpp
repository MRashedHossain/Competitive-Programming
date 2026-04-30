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
 
int dx[] = {-1,1,0,0}; ///Side sharing move
int dy[] = {0,0,-1,1}; ///Side sharing move
int n,m,k;
 
bool check(int x,int y){
    return (x > 0 && x < n+1 && y > 0 && y < m+1);
}
void solve(int tc) {
    cin>>n>>m>>k;
    char g[n+2][m+2];
    int l = 0,r = 0;
    for(int i=1; i<=n; i++) {
        for(int j=1; j<=m; j++) {
            cin>>g[i][j];
            if(g[i][j] == '.' && !l && !r) {
                l = i;
                r = j;
            }
        }
    }
    int lvl[n+2][m+2],vis[n+2][m+2];
    vector<pair<int,int>> dis[(n+2)*(m+2)],res;
    memset(lvl,0,sizeof(lvl));
    memset(vis,0,sizeof(vis));
    queue<pair<int,int>> q;
    q.push({l,r});
    lvl[l][r] = 1;
    while(!q.empty()){
        auto u = q.front();
        q.pop();
        if(vis[u.F][u.S])continue;
        vis[u.F][u.S]++;
        for(int i=0;i<4;i++){
            int xx = u.F+dx[i],yy = u.S+dy[i];
            if(check(xx,yy) && vis[xx][yy] == 0 && g[xx][yy] == '.'){
                q.push({xx,yy});
                lvl[xx][yy] = lvl[u.F][u.S]+1;
            }
        }
    }
    for(int i=1;i<=n;i++){
        for(int j=1;j<=m;j++){
            if(lvl[i][j])dis[lvl[i][j]].push_back({i,j});
        }
    }
    while(res.size() < k){
        for(int i=n*m;i>0;i--){
            for(auto &[x,y]:dis[i]){
                res.push_back({x,y});
                if(res.size() == k)break;
            }
            if(res.size() == k)break;
        }
    }
    for(auto &[x,y]:res)g[x][y] = 'X';
    for(int i=1;i<=n;i++){
        for(int j=1;j<=m;j++)cout<<g[i][j];
        cout<<endl;
    }
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
 