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
 
int dx[] = {+0,+0,+1,-1,-1,+1,-1,+1}; ///King's move
int dy[] = {-1,+1,+0,+0,+1,+1,-1,-1}; ///King's move
 
void solve(int tc) {
    int x0,y0,x1,y1;
    cin>>x0>>y0>>x1>>y1;
    map<pair<int,int>,int> can,dis,vis;
    int seg;
    cin>>seg;
    for(int i=1; i<=seg; i++) {
        int r,a,b;
        cin>>r>>a>>b;
        for(int j=a; j<=b; j++) {
            can[ {r,j}] = 1;
            dis[ {r,j}] = inf;
            vis[ {r,j}] = 0;
        }
    }
    queue<pair<int,int>> q;
    q.push({x0,y0});
    dis[ {x0,y0}]= 0;
    while(!q.empty()) {
        int ux = q.front().F,uy = q.front().S;
        q.pop();
        if(vis[ {ux,uy}])continue;
        vis[ {ux,uy}]++;
        for(int i=0; i<8; i++) {
            int vx = ux+dx[i],vy = uy+dy[i];
            if(can[ {vx,vy}] && dis[ {vx,vy}] > dis[ {ux,uy}] + 1) {
                dis[ {vx,vy}] = dis[ {ux,uy}] + 1;
                q.push({vx,vy});
            }
        }
    }
    cout<<(dis[ {x1,y1}] == inf?-1:dis[ {x1,y1}])<<endl;
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
 