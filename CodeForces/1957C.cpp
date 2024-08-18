#include<bits/stdc++.h>
using namespace std;

#define endl "\n"
#define RASHED ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);

#define int long long int
#define show(x) cout << #x << " = " << x << endl
#define maxn 300010

int dp[maxn],M = 1e9+7;
void solve(int tc) {
    int n,k,m = 0;
    cin>>n>>k;
    for(int i=0; i<k; i++) {
        int x,y;
        cin>>x>>y;
        if(x == y)m++;
        else m += 2;
    }
    for(int i=2; i<=n-m; i++) {
        dp[i] = (dp[i-1]%M + ((2*(i-1)%M)*(dp[i-2]%M))%M)%M;
    }
    cout<<dp[n-m]<<endl;
}
signed main() {
    RASHED
    memset(dp,0,sizeof dp);
    dp[0] = dp[1] = 1;
    int TC;
    cin>>TC;
    for(int i=1; i<=TC; i++)solve(i);
    return 0;
}
/**
CASES:

*/

