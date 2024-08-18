#include<bits/stdc++.h>
using namespace std;

#define endl "\n"
#define RASHED ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
///#define show(x) cout << #x << " = " << x << endl
///#define int long long int
vector<int> G[200010],path(200010,-1),res(200010,0);
void BFS(int src,int lvl) {
    queue<int> q;
    q.push(src);
    path[src] = lvl;
    while(!q.empty()){
        int u = q.front();
        q.pop();
        for(auto i:G[u]){
            if(path[i] == -1){
                path[i] = lvl;
                q.push(i);
            }
        }
    }
}
signed main() {
    RASHED
    int n,m;cin>>n>>m;
    while(m--){
        int x,y;cin>>x>>y;
        G[x].push_back(y);
        G[y].push_back(x);
    }
    int flg = 1,ans = 0;
    for(int i=1;i<=n;i++){
        if(path[i] == -1){
            BFS(i,flg);
            flg++;
        }
    }
    for(int i=1;i<=n;i++)res[path[i]]++;
    for(int i=1;i<=n;i++)ans = max(ans,res[i]);
    cout<<ans<<endl;
    return 0;
}

