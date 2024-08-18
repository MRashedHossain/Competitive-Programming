#include<bits/stdc++.h>
using namespace std;

#define endl "\n"
#define RASHED ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
///#define show(x) cout << #x << " = " << x << endl
#define int long long int

int solve() {
    int n,res = 0;
    cin>>n;
    vector<int> G[20000+8];
    for(int i=0; i<n; i++) {
        int u,v;
        cin>>u>>v;
        G[u].push_back(v);
        G[v].push_back(u);
    }
    for(int i=1; i<=20000; i++)res = max(res,(int)G[i].size());
    return res;
}
signed main() {
    RASHED
    int tc;
    cin>>tc;
    for(int i=1; i<=tc; i++) {
        cout<<"Case "<<i<<": "<<solve()<<endl;
    }
    return 0;
}
/**
CASES:

*/

