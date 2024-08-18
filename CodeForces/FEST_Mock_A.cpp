#include<bits/stdc++.h>
using namespace std;

#define endl "\n"
#define RASHED ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
///#define show(x) cout << #x << " = " << x << endl
///#define int long long int

int n,m;
map<string,int> f;
vector<int> G[200010],path(200010,-1);

void BFS(int src,int lvl) {
    queue<int> q;
    path[src] = lvl;
    q.push(src);
    while(!q.empty()) {
        int u = q.front();
        q.pop();
        for(auto i:G[u]) {
            if(path[i] == -1) {
                path[i] = lvl;
                q.push(i);
            }
        }
    }
}

signed main() {
    RASHED
    cin>>n>>m;
    for(int i=1; i<=n; i++) {
        string s;
        cin>>s;
        f[s] = i;
    }
    while(m--) {
        string s,t;
        cin>>s>>t;
        G[f[s]].push_back(f[t]);
        G[f[t]].push_back(f[s]);
    }
    int flg = 1,ans = 0;
    for(int i=1; i<=n; i++) {
        if(path[i] == -1) {
            BFS(i,flg);
            ans++;
        }
    }
    cout<<ans<<endl;
    return 0;
}

