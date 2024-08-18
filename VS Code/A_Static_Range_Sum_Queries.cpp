#include<bits/stdc++.h>
using namespace std;

#define endl "\n"
#define RASHED ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
///#define show(x) cout << #x << " = " << x << endl
#define int long long int

void solve() {
    int n,q;cin>>n>>q;
    int ps[n+8] = {0};
    for(int i=1;i<=n;i++){
        int x;cin>>x;
        ps[i] = ps[i-1]+x;
    }
    while(q--){
        int x,y;cin>>x>>y;
        cout<<ps[y]-ps[x-1]<<endl;
    }
}
signed main() {
    RASHED
    solve();
    return 0;
}
/**
CASES:

*/

