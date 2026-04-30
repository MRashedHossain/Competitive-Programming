#include<bits/stdc++.h>
using namespace std;
 
#define RASHED ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
#define endl "\n"
#define int long long int
 
#define show(x) cout << #x << " = " << x << endl
#define inf (int)1e17
#define maxn 100010
 
#define all(x) (x).begin(), (x).end()
#define rall(x) (x).rbegin(), (x).rend()
#define sz(x) ((int)(x).size())
 
#define F first
#define S second
 
const int M = 1e9+7;
 
int k,dp[maxn],ps[maxn] = {0};
 
int dpp(int idx) {
    if(idx < 0) return 0;
    if(dp[idx] != -1)return dp[idx];
 
    int ans = 0;
    ans = (dpp(idx-1)%M + dpp(idx-k)%M)%M;
    return dp[idx] = ans;
}
 
void solve(int tc) {
    int a,b;
    cin>>a>>b;
    int ans = (ps[b] - ps[a-1] + M)%M;
    cout<<ans<<endl;
}
signed main() {
    RASHED
    int TC = 1;
    cin>>TC>>k;
    memset(dp,-1,sizeof(dp));
    dp[0] = 1;
    dpp(100000);
    for(int i=1; i<=100000; i++)ps[i] = (ps[i-1] + dp[i])%M;
    for(int i=1; i<=TC; i++)solve(i);
    return 0;
}
/**
CASES:
 
*/
 
 