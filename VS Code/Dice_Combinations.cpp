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

int n,dp[1000008],M = 1000000007;
int dx[] = {1,2,3,4,5,6};

int dpp(int n) {
    if(n < 0)return 0;
    if(dp[n] != -1)return dp[n];
    int curr = 0,pre = 0;
    for(int i=0; i<6; i++) {
        curr += dpp(n-dx[i])%M;
    }
    return (dp[n] = curr)%M;
}
void solve(int tc) {
    cin>>n;
    memset(dp,-1,sizeof dp);
    dp[0] = 1;
    cout<<dpp(n)<<endl;
}
signed main() {
    RASHED
    int TC = 1;
    ///cin>>TC;
    for(int i=1; i<=TC; i++)solve(i);
    return 0;
}
/**
CASES:

*/
