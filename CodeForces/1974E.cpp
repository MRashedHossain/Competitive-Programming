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

int n,k,dp[maxn][2];
vector<pair<int,int>> v;

void clean() {
    v.clear();
    for(int i=0; i<n; i++) {
        for(int j=0; j<2; j++)dp[i][j] = -1;
    }
}
int dpp(int has,int curr,int idx) {
    if(idx == n-1){
        if(has >= v[idx].F)return v[idx].S;
        return 0;
    }
    if(dp[idx][curr] != -1)return dp[idx][curr];
    if(has >= v[idx].F)dp[idx][curr] = max(dpp(k+has-v[idx].S,1,idx+1)+v[idx].S,dpp(has+k,0,idx+1));
    else dp[idx][curr] = dpp(has+k,0,idx+1);
    return dp[idx][curr];
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

