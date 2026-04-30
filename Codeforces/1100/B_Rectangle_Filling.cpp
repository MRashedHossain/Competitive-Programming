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
    int n,m;cin>>n>>m;
    char s[n+4][m+4];
    set<char> n1,n2,r1,r2,f;
    for(int i=1;i<=n;i++)for(int j=1;j<=m;j++)cin>>s[i][j];
    for(int i=1;i<=n;i++)for(int j=1;j<=m;j++)f.insert(s[i][j]);
    if(f.size() == 1)return true;
    if(s[1][1] == s[1][m]){
        for(int i=1;i<=m;i++)if(s[n][i] == s[1][1])return true;
    }
    if(s[n][1] == s[n][m]){
        for(int i=1;i<=m;i++)if(s[1][i] == s[n][m])return true;
    }
    if(s[1][1] == s[n][1]){
        for(int i=1;i<=n;i++)if(s[i][m] == s[1][1])return true;
    }
    if(s[1][m] == s[n][m]){
        for(int i=1;i<=n;i++)if(s[i][1] == s[n][m])return true;
    }
    for(int i=1;i<=m;i++){
        n1.insert(s[1][i]);
        n2.insert(s[n][i]);
    }
    for(int i=1;i<=n;i++){
        r1.insert(s[i][1]);
        r2.insert(s[i][m]);
    }
    return (r1.size() > 1 && r2.size() > 1 && n1.size() > 1 && n2.size() > 1);
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