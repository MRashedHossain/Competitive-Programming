#include<bits/stdc++.h>
using namespace std;
 
#define endl "\n"
#define RASHED ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
#define int long long int
#define MX 200010
 
int dp[MX],a[MX],n;
int dpp(int i) {
    if(i > n)return 0;
    if(dp[i] != -1)return dp[i];
    return (dp[i] = a[i]+dpp(i+a[i]));
}
void solve() {
    ///memset(dp,-1,sizeof dp);
    ///memset(a,0,sizeof a);
    int ans = 0;
    cin>>n;
    for(int i=1;i<=n;i++)dp[i] = -1;
    for(int i=1; i<=n; i++)cin>>a[i];
    for(int i=1; i<=n; i++) {
        ans = max(ans,dpp(i));
    }
    cout<<ans<<endl;
    for(int i=1;i<=n;i++)dp[i] = -1;
    for(int i=1;i<=n;i++)a[i] = 0;
}
signed main() {
    RASHED
    int tc;
    cin>>tc;
    while(tc--)solve();
    return 0;
}