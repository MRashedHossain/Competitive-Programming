#include<bits/stdc++.h>
using namespace std;
 
#define endl "\n"
#define RASHED ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
///#define int long long int
 
void solve() {
    int n;cin>>n;
    for(int i=1,j=(n*n);i<=(n*n)/2;i++,j--)cout<<i<<" "<<j<<endl;
}
signed main() {
    RASHED
    solve();
    return 0;
}
 