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

int dp[3][105],day[105],n;

int dpp(int pre,int idx) {
    if(idx >= n)return 0;
    if(dp[pre][idx] != -1)return dp[pre][idx];
    if(day[idx] == 0)dp[pre][idx] = dpp(0,idx+1)+1;
    else if(day[idx] == 3) {
        if(pre == 1)dp[pre][idx] = min(dpp(0,idx+1)+1LL,dpp(2,idx+1));
        else if(pre == 2)dp[pre][idx] = min(dpp(0,idx+1)+1LL,dpp(1,idx+1));
        else dp[pre][idx] = min(dpp(0,idx+1)+1LL,min(dpp(1,idx+1),dpp(2,idx+1)));
    } else {
        if(pre == day[idx])dp[pre][idx] = dpp(0,idx+1)+1;
        else dp[pre][idx] = dpp(day[idx],idx+1);
    }
    return dp[pre][idx];
}
void solve(int tc) {
    memset(dp,-1,sizeof(dp));
    cin>>n;
    for(int i=0; i<n; i++)cin>>day[i];
    int res;
    if(day[0] == 0)res = dpp(0,1)+1LL;
    else if(day[0] == 3)res = min(dpp(0,1)+1LL,min(dpp(1,1),dpp(2,1)));
    else res = dpp(day[0],1);
    cout<<res<<endl;
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

