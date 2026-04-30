#include<bits/stdc++.h>
using namespace std;
 
#define RASHED ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
#define endl "\n"
#define int long long int
 
#define show(x) cout << #x << " = " << x << endl
#define inf (int)1e17
#define maxn 300010
 
#define all(x) (x).begin(), (x).end()
#define rall(x) (x).rbegin(), (x).rend()
#define sz(x) ((int)(x).size())
 
#define F first
#define S second
 
const int M = 1000000007;
vector<int> g[maxn],par(maxn,-1),dis(maxn,0),f_dis(maxn,0);
int n;
 
void clean() {
    for(int i=1; i<=n; i++) {
        g[i].clear();
        par[i] = -1;
        dis[i] = 0;
        f_dis[i] = 0;
    }
}
 
int dfs(int node) {
    if(g[node].empty()) {
        return dis[node] = 1;
    }
    int ans = 0;
    for(auto v:g[node]) {
        ans += (dfs(v)%M);
    }
    ans += 3;
    ans %= M;
    return dis[node] = (ans%M);
}
 
void dfs2(int node,int res){
    f_dis[node] = dis[node]+res;
    f_dis[node] %= M;
    for(auto v:g[node]){
        dfs2(v,f_dis[node]);
    }
}
 
void solve(int tc) {
    cin>>n;
    clean();
    par[1] = 0;
    for(int i=1; i<=n; i++) {
        int l,r;
        cin>>l>>r;
        if(l == r)continue;
        par[l] = par[r] = i;
        g[i].push_back(l);
        g[i].push_back(r);
    }
    dfs(1);
    f_dis[1] = dis[1];
    for(auto v:g[1])dfs2(v,dis[1]);
    for(int i=1; i<=n; i++)cout<<f_dis[i]<<" ";
    cout<<endl;
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