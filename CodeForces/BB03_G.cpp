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
    int n,Q;cin>>n>>Q;
    vector<int> G[n+8];
    for(int i=1;i<n;i++){
        int u,v;cin>>u>>v;
        G[u].push_back(v);
        G[v].push_back(u);
    }
    int lvl[n+8];memset(lvl,-1,sizeof lvl);
    lvl[1] = 0;
    queue<int> q;
    q.push(1);
    while(!q.empty()){
        int u = q.front();
        q.pop();
        for(auto v:G[u]){
            if(lvl[v] == -1){
                lvl[v] = lvl[u]+1;
                q.push(v);
            }
        }
    }
    map<int,int> f;
    int maxWater;
    for(int i=1;i<=n;i++)f[lvl[i]]++;
    for(int i=1;i<=n;i++){
            f[i] += f[i-1];
            if(f[i] >= n){
                maxWater = i;
                break;
            }
    }
//    for(int i=1;i<=n;i++)cout<<i<<" : "<<f[i]<<endl;
//    show(maxWater);
    while(Q--){
        int x;cin>>x;
        if(x >= maxWater)cout<<f[maxWater]<<endl;
        else cout<<f[x]<<endl;
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

