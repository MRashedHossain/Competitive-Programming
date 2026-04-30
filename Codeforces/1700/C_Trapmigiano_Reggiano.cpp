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
    int n,st,en;cin>>n>>st>>en;
    vector<int> g[n+2];
    for(int i=1;i<n;i++){
        int u,v;cin>>u>>v;
        g[u].push_back(v);
        g[v].push_back(u);
    }
    vector<int> lvl(n+2,inf);
    queue<int> q;
    q.push(en);
    lvl[en] = 0;
    while(!q.empty()){
        int u = q.front();q.pop();
        for(auto v:g[u]){
            if(lvl[v]>lvl[u]+1){
                lvl[v] = lvl[u]+1;
                q.push(v);
            }
        }
    }
    vector<pair<int,int>> res;
    for(int i=1;i<=n;i++)res.push_back({lvl[i],i});
    sort(res.rbegin(),res.rend());
    for(auto i:res)cout<<i.S<<" ";
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