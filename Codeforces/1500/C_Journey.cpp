#include<bits/stdc++.h>
using namespace std;
 
#define RASHED ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
#define endl "\n"
#define int long long int
 
#define show(x) cout << #x << " = " << x << endl
#define inf (int)1e17
#define maxn 100010
 
#define all(x) (x).begin(), (x).end()
#define rall(x) (x).rbegin(), (x).rend()
#define sz(x) ((int)(x).size())
 
#define F first
#define S second
 
int n;
vector<int> g[maxn],vis(maxn,0);
vector<double> dp(maxn,0.0);
 
double dfs(int node,int lev,double his_prob){
    if(vis[node])return dp[node];
    vis[node]++;
    int child = g[node].size();
    if(node != 1)child--;
    double curr_prob = (double)his_prob/(double)child,ans = 0.0;
    for(auto v:g[node]){
        if(!vis[v]){
            ans += dfs(v,lev+1,curr_prob);
        }
    }
    if(ans == 0.0)ans += (his_prob)*(lev);
    return dp[node] = ans;
}
 
void solve(int tc) {
    cin>>n;
    for(int i=1;i<n;i++){
        int u,v;cin>>u>>v;
        g[u].push_back(v);
        g[v].push_back(u);
    }
    dfs(1,0,1.0);
    printf("%.15lf",dp[1]);
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
 
 