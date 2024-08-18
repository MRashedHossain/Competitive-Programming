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

int n,dp[3][maxn],res = 0,curr = 1;
vector<pair<int,int>> v;

int dpp(int i,int j) {
    if(j>=n-1)return 1;
    if(dp[i][j] != -1)return dp[i][j];
    int L = 0,R = 0,N = 0;
    if(i == 2) {
        if(v[j].F - v[j].S > v[j-1].F + v[j-1].S)L = dpp(1,j+1)+1;
        if(v[j+1].F > v[j].F + v[j].S)R = dpp(2,j+1)+1;
        N = dpp(0,j+1);
    } else {
        if(v[j].F - v[j].S > v[j-1].F)L = dpp(1,j+1)+1;
        if(v[j+1].F > v[j].F + v[j].S)R = dpp(2,j+1)+1;
        N = dpp(0,j+1);
    }
    return (dp[i][j] = max(L,max(R,N)));
}
void solve(int tc) {
    memset(dp,-1,sizeof(dp));
    cin>>n;
    for(int i=0; i<n; i++) {
        int x,y;
        cin>>x>>y;
        v.push_back({x,y});
    }
    if(n<3){
        cout<<n<<endl;
        return;
    }
    dp[1][0] = dpp(1,1)+1;
    dp[2][0] = dpp(2,1)+1;
    dp[0][0] = dpp(0,1);
    cout<<max(dp[0][0],max(dp[1][0],dp[2][0]))<<endl;
//    for(int i=0; i<3; i++) {
//        for(int j=0; j<n; j++)cout<<dp[i][j]<<" ";
//        cout<<endl;
//    }
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

