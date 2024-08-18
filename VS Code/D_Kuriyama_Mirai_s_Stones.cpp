#include<bits/stdc++.h>
using namespace std;

#define endl "\n"
#define RASHED ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
///#define show(x) cout << #x << " = " << x << endl
///#define int long long int

void solve() {
    int n;cin>>n;
    int ps1[n+7] = {0},ps2[n+7] = {0};
    vector<int> v;
    for(int i=1;i<=n;i++){
        int x;cin>>x;
        ps1[i] = ps1[i-1]+x;
        v.push_back(x);
    }
    sort(v.begin(),v.end());
    for(int i=0;i<n;i++){
        ps2[i+1] = ps2[i]+v[i];
    }
    int q;cin>>q;
    while(q--){
        int type,x,y;cin>>type>>x>>y;
        if(type == 1)cout<<ps1[y]-ps1[x-1]<<endl;
        else cout<<ps2[y]-ps2[x-1]<<endl;
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
