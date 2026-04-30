#include<bits/stdc++.h>
using namespace std;
 
#define RASHED ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
#define endl "\n"
#define int long long int
 
#define show(x) cout << #x << " = " << x << endl
#define inf (int)1e17
#define maxn 200010
 
#define F first
#define S second
 
char g[52][52][52];
int vis[52][52][52],comp[52][52][52];
int x,y,z,comp_number;
 
int dx[] = {1,-1,0,0,0,0};
int dy[] = {0,0,1,-1,0,0};
int dz[] = {0,0,0,0,1,-1};
 
void reset() {
    for(int i=1; i<=50; i++)for(int j=1; j<=50; j++)for(int k=1; k<=50; k++) {
                vis[i][j][k] = 0;
                comp[i][j][k] = 0;
            }
}
 
bool valid(int i,int j,int k) {
    return (i > 0 && i < z+1 && j > 0 && j < x+1 && k > 0 && k < y+1);
}
 
void dfs(int u,int v,int w) {
    if(!valid(u,v,w) || vis[u][v][w] || g[u][v][w] == '#')return;
    vis[u][v][w]++;
    comp[u][v][w] = comp_number;
    for(int i=0; i<6; i++) {
        int ui = u+dx[i],vi = v+dy[i],wi = w+dz[i];
        dfs(ui,vi,wi);
    }
}
 
void solve(int tc) {
    comp_number = 1;
    cin>>x>>y>>z;
    for(int i=1; i<=z; i++)for(int j=1; j<=x; j++)for(int k=1; k<=y; k++)cin>>g[i][j][k];
    for(int i=1; i<=z; i++)for(int j=1; j<=x; j++)for(int k=1; k<=y; k++) {
                if(!vis[i][j][k] && g[i][j][k] == '.') {
                    dfs(i,j,k);
                    comp_number++;
                }
            }
 
//    for(int i=1; i<=z; i++) {
//        for(int j=1; j<=x; j++) {
//            for(int k=1; k<=y; k++)cout<<comp[i][j][k];
//            cout<<endl;
//        }
//        cout<<endl;
//    }
 
    vector<int> cc(maxn,0);
    for(int i=1; i<=z; i++)for(int j=1; j<=x; j++)for(int k=1; k<=y; k++) {
                if(comp[i][j][k])cc[comp[i][j][k]]++;
            }
    int res = 0;
    for(int i=1; i<=x; i++) {
        for(int j=1; j<=y; j++) {
            set<int> now;
            for(int k=1; k<=z; k++) {
                if(comp[k][i][j])now.insert(comp[k][i][j]);
            }
            int curr = 0;
            for(int ii:now)curr += cc[ii];
            res = max(res,curr);
        }
    }
    cout<<res<<endl;
}
signed main() {
    RASHED
    int TC = 1;
    cin>>TC;
    for(int i=1; i<=TC; i++) {
        reset();
        solve(i);
    }
    return 0;
}
/**
CASES:
 
*/