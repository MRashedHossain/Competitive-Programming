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

int n,k,M = 1000000007;
vector<int> v,dp(1000008,-1);
vector<bool> vis(1000008,false);

int dpp(int xx) {
    if(xx < 0)return 0;
    if(dp[xx] != -1)return dp[xx];
    int curr = 0;
    for(int i=0; i<n; i++) {
        curr += dpp(xx-v[i]);
        curr%=M;
    }
    return dp[xx] = curr;
}
void solve(int tc) {
    dp[0] = 1;
    cin>>n>>k;
    for(int i=0; i<n; i++) {
        int x;
        cin>>x;
        v.push_back(x);
    }
    cout<<dpp(k)<<endl;
    for(int i=0;i<=k;i++)cout<<dp[i]<<" ";
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

