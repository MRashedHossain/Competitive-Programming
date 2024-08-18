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

int n,k;
vector<int> v,dp(1000008,inf);
vector<bool> vis(1000008,false);

int dpp(int kk) {
    if(kk < 0)return inf;
    if(vis[kk] == true)return dp[kk];
    vis[kk] = true;
    for(int i=0; i<n; i++) {
        dp[kk] = min(dp[kk],dpp(kk-v[i])+1);
    }
    return dp[kk];
}
void solve(int tc) {
    dp[0] = 0;
    vis[0] = true;
    cin>>n>>k;
    for(int i=0; i<n; i++) {
        int x;
        cin>>x;
        v.push_back(x);
    }
    dp[k] = dpp(k);
    cout<<(dp[k] == inf?-1:dp[k])<<endl;
}
signed main() {
    RASHED
    int TC = 1;
    ///cin>>TC;
    for(int i=1; i<=TC; i++)solve(i);
    return 0;
}
