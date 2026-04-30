#include<bits/stdc++.h>
using namespace std;
 
#define RASHED ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
#define endl "\n"
#define int long long int
 
#define show(x) cout << #x << " = " << x << endl
#define inf (int)1e17
#define maxn 4005
 
#define F first
#define S second
 
int n;
string s;
vector<int> g[maxn],vis(maxn,0),balacne(maxn,0);
 
void reset() {
    for(int i=1; i<=n; i++) {
        g[i].clear();
        balacne[i] = 0;
        vis[i] = 0;
    }
    s = "";
}
 
int dfs(int u) {
    vis[u]++;
    if(g[u].empty())return(balacne[u] = (s[u] == 'W'?1:-1));
    int his_balance = (s[u] == 'W'?1:-1);
    for(auto v:g[u]) {
        if(!vis[v])his_balance += dfs(v);
    }
    return (balacne[u] = his_balance);
}
 
void solve(int tc) {
    cin>>n;
    for(int i=2; i<=n; i++) {
        int x;
        cin>>x;
        g[x].push_back(i);
    }
    cin>>s;
    s = '#'+s;
    dfs(1);
    int res = 0;
    for(int i=1; i<=n; i++) {
        res += (balacne[i] == 0);
    }
    cout<<res<<endl;
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
 