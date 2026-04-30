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
    int n;
    cin>>n;
    char g[3][n+2];
    for(int i=1; i<=2; i++)for(int j=1; j<=n; j++)cin>>g[i][j];
    ///for(int i=1; i<=2; i++)for(int j=1; j<=n; j++)cout<<g[i][j];
    int res = 0;
    for(int i=2; i<n; i++) {
        if(g[2][i-1] == 'x' && g[2][i+1] == 'x' && g[2][i] == '.' && g[1][i] == '.' && g[1][i-1] == '.' && g[1][i+1] == '.')res++;
    }
    for(int i=2; i<n; i++) {
        if(g[1][i-1] == 'x' && g[1][i+1] == 'x' && g[1][i] == '.' && g[2][i] == '.' && g[2][i-1] == '.' && g[2][i+1] == '.')res++;
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