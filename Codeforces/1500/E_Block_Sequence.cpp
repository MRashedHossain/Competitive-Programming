#include<bits/stdc++.h>
using namespace std;
 
#define RASHED ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
#define endl "\n"
#define int long long int
 
#define show(x) cout << #x << " = " << x << endl
#define inf (int)1e17
#define maxn 200010
 
#define all(x) (x).begin(), (x).end()
#define rall(x) (x).rbegin(), (x).rend()
#define sz(x) ((int)(x).size())
 
#define F first
#define S second
 
int n;
int dp[maxn],a[maxn];
 
int dpp(int idx) {
    if(idx == n+1)return 0;
    if(idx > n+1)return inf;
 
    if(dp[idx] != -1)return dp[idx];
 
    int ans = inf;
 
    ans = min(ans,min(1+dpp(idx+1),dpp(idx+a[idx]+1)));
 
    return dp[idx] = ans;
}
 
void solve(int tc) {
    cin>>n;
 
    for(int i=1; i<=n; i++)dp[i] = -1;
 
    for(int i=1; i<=n; i++)cin>>a[i];
 
    cout<<min(dpp(1),n)<<endl;
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
 
 