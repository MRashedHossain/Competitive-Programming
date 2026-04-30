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
 
void solve(int tc) {
    int n,x;
    cin>>n>>x;
    vector<int> g[n+2],dis1(n+2,0),dis2(n+2,0),vis1(n+2,0),vis2(n+2,0);
    for(int i=1; i<n; i++) {
        int u,v;
        cin>>u>>v;
        g[u].push_back(v);
        g[v].push_back(u);
    }
    queue<int> q1,q2;
    q1.push(1);
    while(!q1.empty()) {
        int u = q1.front();
        q1.pop();
        if(vis1[u])continue;
        vis1[u]++;
        for(auto v:g[u]) {
            if(!vis1[v]) {
                dis1[v] = dis1[u]+1;
                q1.push(v);
            }
        }
    }
    q2.push(x);
    while(!q2.empty()) {
        int u = q2.front();
        q2.pop();
        if(vis2[u])continue;
        vis2[u]++;
        for(auto v:g[u]) {
            if(!vis2[v]) {
                dis2[v] = dis2[u]+1;
                q2.push(v);
            }
        }
    }
    int res = 0;
    for(int i=1; i<=n; i++) {
        if(dis1[i] > dis2[i])res = max(res,(2*dis1[i]));
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
 