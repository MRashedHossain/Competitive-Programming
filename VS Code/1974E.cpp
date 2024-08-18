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

int n,k,dp[2][maxn];
vector<pair<int,int>> v;

void clean() {
    v.clear();
    for(int i=0; i<2; i++) {
        for(int j=0; j<n; j++)dp[i][j] = -1;
    }
}
int dpp(int money,int pre,int idx) {
    if(idx >= n)return 0;
    if(dp[pre][idx] != -1)return dp[pre][idx];
    if(money >= v[idx].F)dp[pre][idx] = max(dpp(money-v[idx].F+k,1,idx+1)+v[idx].S,dpp(money+k,0,idx+1));
    else dp[pre][idx] = dpp(money+k,0,idx+1);
    return dp[pre][idx];
}
void solve(int tc) {
    cin>>n>>k;
    for(int i=0; i<n; i++) {
        int x,y;
        cin>>x>>y;
        v.push_back({x,y});
    }
    cout<<dpp(0,0,0)<<endl;
    clean();
}
signed main() {
    RASHED
    memset(dp,-1,sizeof(dp));
    int TC = 1;
    cin>>TC;
    for(int i=1; i<=TC; i++)solve(i);
    return 0;
}
/**
CASES:

*/

