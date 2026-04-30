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
 
const int M = 5*32768;
vector<int> g[M],dis(M,inf),vis(M,0);
 
void build() {
    for(int i=0;i<32768;i++) {
        int u = i;
        int v1 = (u+1)%32768,v2 = (2*u)%32768;
        if(u != v1)g[v1].push_back(u);
        if(u != v2)g[v2].push_back(u);
    }
    queue<int> q;
    q.push(0);
    dis[0] = 0;
    while(!q.empty()) {
        int u = q.front();
        q.pop();
        if(vis[u])continue;
        for(auto v:g[u]) {
            if(dis[v] > dis[u]+1) {
                dis[v] = dis[u]+1;
                q.push(v);
                vis[u]++;
            }
        }
    }
    return;
}
void solve(int tc) {
    int n;
    cin>>n;
    vector<int> res(n);
    for(int i=0; i<n; i++) {
        int x;
        cin>>x;
        res[i] = dis[x];
    }
    for(auto i:res)cout<<i<<" ";
}
signed main() {
    RASHED
    build();
    int TC = 1;
    //cin>>TC;
    for(int i=1; i<=TC; i++)solve(i);
    return 0;
}
/**
CASES:
 
*/
 