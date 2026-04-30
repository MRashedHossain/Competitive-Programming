#include<bits/stdc++.h>
using namespace std;
 
#define RASHED ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
#define endl "\n"
#define int long long int
 
#define show(x) cout << #x << " = " << x << endl
#define inf (int)1e17
#define maxn 5005
 
#define all(x) (x).begin(), (x).end()
#define rall(x) (x).rbegin(), (x).rend()
#define sz(x) ((int)(x).size())
 
#define F first
#define S second
 
int n,m;
int dp[maxn][maxn];
string s,t;
 
void solve(int tc) {
    cin>>n>>m;
    cin>>s>>t;
    s = '#'+s;
    t = '*'+t;
    int ans = 0;
    for(int i=1; i<=n; i++) {
        for(int j=1; j<=m; j++){
            if(s[i] == t[j])dp[i][j] = 2+dp[i-1][j-1];
            else dp[i][j] = max(dp[i][j-1],dp[i-1][j])-1;
            dp[i][j] = max(dp[i][j],0LL);
            ans = max(ans,dp[i][j]);
        }
    }
    cout<<ans<<endl;
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
 
 