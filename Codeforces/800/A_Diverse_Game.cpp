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
 
void solve(int tc) {
    int n,m;cin>>n>>m;
    int g[n+2][m+2];
    for(int i=1;i<=n;i++)for(int j=1;j<=m;j++)cin>>g[i][j];
    if(n == 1 && m == 1){
        cout<<-1<<endl;
        return;
    }
    if(n == 1){
        int tmp = g[1][m];
        for(int i=m;i>1;i--)g[1][i] = g[1][i-1];
        g[1][1] = tmp;
        for(int i=1;i<=n;i++){
            for(int j=1;j<=m;j++)cout<<g[i][j]<<" ";
            cout<<endl;
        }
        return;
    }
    if(m == 1){
        int tmp = g[1][1];
        for(int i=1;i<n;i++)g[i][1] = g[i+1][1];
        g[n][1] = tmp;
        for(int i=1;i<=n;i++){
            for(int j=1;j<=m;j++)cout<<g[i][j]<<" ";
            cout<<endl;
        }
        return;
    }
    for(int i=1;i<=n;i++){
        int tmp = g[i][1];
        for(int j=1;j<=m;j++)g[i][j] = g[i][j+1];
        g[i][m] = tmp;
    }
    for(int i=1;i<=n;i++){
            for(int j=1;j<=m;j++)cout<<g[i][j]<<" ";
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
 