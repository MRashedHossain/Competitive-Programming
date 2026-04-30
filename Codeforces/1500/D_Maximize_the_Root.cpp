#include<bits/stdc++.h>
using namespace std;
 
#define RASHED ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
#define endl "\n"
#define int long long int
 
#define show(x) cout << #x << " = " << x << endl
#define inf (int)1e17
#define maxn 200010
 
#define F first
#define S second
 
vector<int> cost(maxn,0),g[maxn];
vector<bool> vis(maxn);
int n,maxnode = 0;
 
bool dfs(int need,int u) {
    if(vis[u])return true;
    vis[u] = true;
    if(g[u].size() == 1) {
        if(need <= cost[u])return true;
        return false;
    }
    if(need>maxnode)return false;
    int now = need + max(0LL,need-cost[u]);
    bool res = true;
    for(int v:g[u]) {
        res &= dfs(now,v);
    }
    return res;
}
void solve(int tc) {
    cin>>n;
    for(int i=1; i<=n; i++){
        cin>>cost[i];
        maxnode = max(maxnode,cost[i]);
    }
    for(int i=2; i<=n; i++) {
        int x;
        cin>>x;
        g[x].push_back(i);
        g[i].push_back(x);
    }
    int lo = 0,hi = maxnode,res = 0;
    while(lo<=hi) {
        int mid = (lo+hi)/2;
        bool now = true;
        for(int i=1;i<=n;i++)vis[i] = false;
        vis[1] = true;
        for(int v:g[1]) {
            if(dfs(mid,v) == false)now = false;
        }
        if(now) {
            res = max(res,mid);
            lo = mid+1;
        } else hi = mid-1;
    }
    cout<<cost[1]+res<<endl;
    for(int i=1;i<=n;i++){
        g[i].clear();
        cost[i] = 0;
    }
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