#include<bits/stdc++.h>
using namespace std;
 
#define RASHED ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
#define endl "\n"
#define int long long int
 
#define show(x) cout << #x << " = " << x << endl
#define inf (int)1e17
#define maxn 1005
 
#define all(x) (x).begin(), (x).end()
#define rall(x) (x).rbegin(), (x).rend()
#define sz(x) ((int)(x).size())
 
#define F first
#define S second
 
int n,k;
int a[7][maxn];
unordered_map<int,int> f[7];
vector<int> g[maxn];
 
int dp[maxn];
 
int dpp(int idx){
    if(dp[idx] != -1)return dp[idx];
 
    int ans = 1;
    for(auto i:g[idx]){
        ans = max(ans,1+dpp(i));
    }
 
    return dp[idx] = ans;
}
 
void solve(int tc) {
    cin>>n>>k;
    for(int i=1; i<=k; i++)for(int j=1; j<=n; j++) {
            cin>>a[i][j];
            f[i][a[i][j]] = j;
        }
 
    for(int i=1; i<=n; i++) {
        for(int j=1; j<=n; j++) {
            if(i == j)continue;
            bool has_edge = true;
 
            for(int ii = 1; ii <= k; ii++) {
                if(f[ii][i] > f[ii][j])has_edge = false;
            }
 
            if(has_edge)g[i].push_back(j);
        }
    }
 
    // for(int i=1; i<=n; i++) {
    //     cout<<i<<" : ";
    //     for(auto j:g[i])cout<<j<<" ";
    //     cout<<endl;
    // }
 
    memset(dp,-1,sizeof(dp));
 
    int res = 0;
 
    for(int i=1;i<=n;i++){
        res = max(res,dpp(i));
    }
 
    cout<<res<<endl;
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
 
 