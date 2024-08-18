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
int dx[4] = {-1,1,0,0}; ///Side sharing move
int dy[4] = {0,0,-1,1}; ///Side sharing move
int n,m;
bool valid(int x,int y) {
    return (x>=1 && x<=n && y>=1 && y<=m);
}
void solve(int tc) {
    cin>>n>>m;
    int a[n+8][m+8];
    for(int i=1; i<=n; i++) {
        for(int j=1; j<=m; j++)cin>>a[i][j];
    }
    for(int i=1; i<=n; i++) {
        for(int j=1; j<=m; j++) {
            int curr = 0;
            for(int k=0; k<4; k++) {
                int u = i+dx[k],v = j+dy[k];
                if(valid(u,v))curr = max(curr,a[u][v]);
            }
            if(curr<a[i][j])a[i][j] = curr;
//            show(curr);
        }
    }
    for(int i=1; i<=n; i++) {
        for(int j=1; j<=m; j++)cout<<a[i][j]<<" ";
        cout<<endl;
    }
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

