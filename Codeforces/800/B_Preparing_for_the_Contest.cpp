#include<bits/stdc++.h>
using namespace std;
 
#define endl "\n"
#define RASHED ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
///#define int long long int
 
void solve() {
    int n,k;cin>>n>>k;
    for(int i=(n-k);i>=1;i--)cout<<i<<" ";
    for(int i=n-k+1;i<=n;i++)cout<<i<<" ";
    cout<<endl;
}
signed main() {
    RASHED
    int tc;
    cin>>tc;
    while(tc--)solve();
    return 0;
}
 