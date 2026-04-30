#include<bits/stdc++.h>
using namespace std;
 
#define endl "\n"
#define RASHED ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
///#define int long long int
vector<int> G[1008];
int n;
 
bool tree() {
    for(int i=1; i<=n; i++) {
        int flg = 0;
        if(G[i].size() == 0)continue;
        for(int j=0; j<G[i].size(); j++) {
            int v = G[i][j];
            if(G[v].size() == 0)flg++;
        }
        if(flg<3)return false;
    }
    return true;
}
signed main() {
    RASHED
    cin>>n;
    for(int i=2; i<=n; i++) {
        int k;
        cin>>k;
        G[k].push_back(i);
    }
    cout<<(tree()?"Yes":"No")<<endl;
    return 0;
}
 