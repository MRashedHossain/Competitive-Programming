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

bool valid(int x,int y) {
    return (x > 0 && x <= n && y > 0 && y <= m);
}

bool solve(int tc) {
    cin>>n>>m>>k;
    char G[n+4][m+4];
    int dis[n+4][m+4];
    bool vis[n+4][m+4];
    for(int i=1; i<=n; i++) {
        for(int j=1; j<=m; j++) {
            cin>>G[i][j];
        }
    }
    for(int i=1; i<=n; i++) {
        for(int j=1; j<=m; j++) {
            vis[i][j] = false;
            dis[i][j] = inf;
        }
    }
    priority_queue<pair<int,pair<int,int>>,vector<pair<int,pair<int,int>>>,greater<pair<int,pair<int,int>>>> q;
    vis[1][1] = true;
    dis[1][1] = 0;
    q.push({0,{1,1}});
    while(!q.empty()) {
        q.pop();
        int cst = q.top().F,x = q.top().S.F,y = q.top().S.S;
        if(dis[x][y] != cst)continue;
        for(int i=0; i<4; i++) {
            int u = x+dx[i],v = y+dy[i];
            if(valid(u,v)) {
                if(dis[u][v] == inf) {
                    if(G[u][v] == '#')dis[u][v] = 1+dis[x][y];
                    else dis[u][v] = dis[x][y];
                    q.push({dis[u][v],{u,v}});
                    continue;
                }
                if(G[u][v] == '.') {
                    if(dis[u][v] < 1+dis[x][y]) {
                        dis[u][v] = 1+dis[x][y];
                        q.push({dis[u][v],{u,v}});
                    }
                } else {
                    if(dis[u][v] < dis[x][y]) {
                        dis[u][v] = dis[x][y];
                        q.push({dis[u][v],{u,v}});
                    }
                }
            }
        }
    }
//    for(int i=1;i<=n;i++){
//        for(int j=1;j<=m;j++){
//            cout<<dis[i][j]<<" ";
//        }
//        cout<<endl;
//    }
    cout<<dis[n][m]<<endl;
}
signed main() {
    RASHED
    int TC = 1;
    cin>>TC;
    for(int i=1; i<=TC; i++)cout<<(solve(i)?"Yes":"No")<<endl;
    return 0;
}
/**
CASES:

*/

