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
vector<int> g[maxn];
vector<vector<int>> dp(maxn,vector<int>(4,0));
 
void reset() {
    for(int i=1; i<=n; i++) {
        g[i].clear();
        for(int j=0; j<4; j++)dp[i][j] = 0;
    }
}
 
vector<int> dfs(int node,int par) {
    vector<int> res(4,0);
    res[0] = 1;
    for(int v:g[node]) {
        if(v == par)continue;
        vector<int> v_res = dfs(v,node);
        vector<int> curr_res(4,0);
        for(int i=1; i<=3; i++) {
            for(int j=0; j<=3; j++) {
                if(v_res[i] && res[j]) {
                    int here = (i+j)%3;
                    if(here == 0)here = 3;
                    curr_res[here] = 1;
                }
            }
        }
        res = curr_res;
    }
    res[1] = 1;
    return dp[node] = res;
}
 
void solve(int tc) {
    cin>>n;
    for(int i=1; i<n; i++) {
        int u,v;
        cin>>u>>v;
        g[u].push_back(v);
        g[v].push_back(u);
    }
    dfs(1,-1);
    // for(int i=1; i<=n; i++) {
    //     cout<<i<<" : ";
    //     for(int j=0; j<3; j++)cout<<dp[i][j]<<" ";
    //     cout<<endl;
    // }
    cout<<(dp[1][3]?"YES":"NO")<<endl;
    reset();
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
 