#include<bits/stdc++.h>
using namespace std;
 
#define RASHED ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
#define endl "\n"
#define int long long int
 
#define show(x) cout << #x << " = " << x << endl
#define inf (int)1e17
#define maxn 2002
 
#define all(x) (x).begin(), (x).end()
#define rall(x) (x).rbegin(), (x).rend()
#define sz(x) ((int)(x).size())
 
#define F first
#define S second
 
int dp[maxn][maxn],n,h,l,r,a[maxn];
 
 
int dpp(int idx, int curr) {
    if (idx > n) return 0; // no more days -> no more wakes to count
    if (dp[idx][curr] != -1) return dp[idx][curr];
 
    int t1 = (curr + a[idx]) % h;
    int t2 = (curr + a[idx] - 1 + h) % h;
 
    int gain1 = (t1 >= l && t1 <= r) ? 1 : 0;
    int gain2 = (t2 >= l && t2 <= r) ? 1 : 0;
 
    int ans1 = dpp(idx + 1, t1) + gain1;
    int ans2 = dpp(idx + 1, t2) + gain2;
 
    return dp[idx][curr] = max(ans1, ans2);
}
 
void solve(int tc) {
    cin>>n>>h>>l>>r;
    for(int i=1; i<=n; i++)cin>>a[i];
    memset(dp,-1,sizeof(dp));
    cout<<dpp(1,0)<<endl;
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
 
 