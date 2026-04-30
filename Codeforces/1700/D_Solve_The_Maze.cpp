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
 
char g[52][52];
int vis[52][52],dis[52][52];
int n,m;
 
bool valid(int x,int y) {
    return (x > 0 && x < n+1 && y > 0 && y < m+1);
}
 
bool solve(int tc) {
    cin>>n>>m;
    vector<pair<int,int>> good,bad;
    for(int i=1; i<=n; i++) {
        for(int j=1; j<=m; j++) {
            cin>>g[i][j];
            vis[i][j] = 0;
            dis[i][j] = inf;
            if(g[i][j] == 'G')good.push_back({i,j});
            if(g[i][j] == 'B')bad.push_back({i,j});
        }
    }
    if(good.empty())return true;
    for(auto ii:bad) {
        int x = ii.F,y = ii.S;
        for(int i=0; i<4; i++) {
            int xx = x+dx[i],yy = y+dy[i];
            if(valid(xx,yy) && g[xx][yy] == '.')g[xx][yy] = '#';
        }
    }
    queue<pair<int,int>> q;
    q.push({n,m});
    dis[n][m] = 0;
    while(!q.empty()) {
        int ux = q.front().F,uy = q.front().S;
        q.pop();
        if(vis[ux][uy])continue;
        vis[ux][uy]++;
        for(int i=0; i<4; i++) {
            int vx = ux+dx[i],vy = uy+dy[i];
            if(valid(vx,vy) && g[vx][vy] != '#' && dis[vx][vy] > dis[ux][uy] + 1) {
                dis[vx][vy] = dis[ux][uy] + 1;
                q.push({vx,vy});
            }
        }
    }
    for(auto ii:good) {
        if(dis[ii.F][ii.S] == inf)return false;
    }
    for(auto ii:bad) {
        if(dis[ii.F][ii.S] != inf)return false;
    }
    return true;
}
signed main() {
    //RASHED
    int TC = 1;
    cin>>TC;
    for(int i=1; i<=TC; i++)cout<<(solve(i)?"Yes":"No")<<endl;
    return 0;
}
/**
CASES:
 
*/
 