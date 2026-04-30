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
 
bool solve(int tc) {
    int n,m;
    cin>>n>>m;
    vector<pair<int,int>> r,c;
    char a[n+2][m+2],b[n+2][m+2];
    for(int i=1; i<=n; i++)for(int j=1; j<=m; j++)cin>>a[i][j];
    for(int i=1; i<=n; i++)for(int j=1; j<=m; j++)cin>>b[i][j];
    for(int i=1; i<=n; i++) {
        int cura = 0,curb = 0;
        for(int j=1; j<=m; j++) {
            cura+=(a[i][j]-'0');
            curb+=(b[i][j]-'0');
        }
        if(cura%3 != curb%3)return false;
    }
    for(int i=1; i<=m; i++) {
        int cura = 0,curb = 0;
        for(int j=1; j<=n; j++) {
            cura+=(a[j][i]-'0');
            curb+=(b[j][i]-'0');
        }
        if(cura%3 != curb%3)return false;
    }
    return true;
}
signed main() {
    RASHED
    int TC = 1;
    cin>>TC;
    for(int i=1; i<=TC; i++)cout<<(solve(i)?"YES":"NO")<<endl;
    return 0;
}
/**
CASES:
 
*/
 