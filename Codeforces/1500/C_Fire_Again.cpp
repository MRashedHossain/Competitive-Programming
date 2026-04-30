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
 
int dx[] = {-1,1,0,0};
int dy[] = {0,0,-1,1};
int n,m;
int dis[2003][2003],vis[2003][2003];
 
bool valid(int x,int y) {
    return (x > 0 && x < n+1 && y > 0 && y < m+1);
}
 
void solve(int tc) {
    cin>>n>>m;
    for(int i=1; i<=n; i++) {
        for(int j=1; j<=m; j++) {
            dis[i][j] = inf;
            vis[i][j] = 0;
        }
    }
    queue<pair<int,int>> q;
    int k;
    cin>>k;
    for(int i=0; i<k; i++) {
        int x,y;
        cin>>x>>y;
        q.push({x,y});
        dis[x][y] = 0;
    }
    while(!q.empty()) {
        auto u = q.front();
        q.pop();
        if(vis[u.F][u.S])continue;
        vis[u.F][u.S]++;
        for(int i=0; i<4; i++) {
            int vx = u.F+dx[i],vy = u.S+dy[i];
            if(valid(vx,vy) && dis[vx][vy] > dis[u.F][u.S] + 1) {
                dis[vx][vy] = dis[u.F][u.S] + 1;
                q.push({vx,vy});
            }
        }
    }
    int last = -1,xx = 0,yy = 0;
 
    for(int i=1; i<=n; i++) {
        for(int j=1; j<=m; j++) {
            if(dis[i][j] > last) {
                last = dis[i][j];
                xx = i;
                yy = j;
            }
        }
    }
    cout<<xx<<" "<<yy<<endl;
    return;
}
signed main() {
    RASHED
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
    int TC = 1;
    //cin>>TC;
    for(int i=1; i<=TC; i++)solve(i);
    return 0;
}
/**
CASES:
 
*/
 