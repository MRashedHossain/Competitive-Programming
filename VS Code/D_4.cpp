#include<bits/stdc++.h>
using namespace std;

#define endl "\n"
#define RASHED ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
///#define show(x) cout << #x << " = " << x << endl
///#define int long long int

void solve() {
    int n;cin>>n;
    vector<int> G[n+8];
    for(int i=1;i<n;i++){
        int x,y;cin>>x>>y;
        G[x].push_back(y);
        G[y].push_back(x);
    }
    int res = 0;
    for(int i=1;i<=n;i++){
        if(G[i].size() == 1)res++;
    }
    cout<<(res+1)/2<<endl;
}
signed main() {
    RASHED
    int TC;
    cin>>TC;
    while(TC--)solve();
    return 0;
}
/**
CASES:

*/

