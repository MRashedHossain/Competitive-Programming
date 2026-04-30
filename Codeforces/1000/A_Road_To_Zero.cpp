#include<bits/stdc++.h>
using namespace std;
 
#define endl "\n"
#define RASHED ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
#define ll long long int
 
void solve() {
    ll x,y,a,b,ans = 1000000000000000007;
    cin>>x>>y>>a>>b;
    ans = min(ans,b*min(x,y)+(a*(max(x,y)-min(x,y))));
    ans = min(ans,(a*x+a*y));
    cout<<ans<<endl;
}
int main() {
    RASHED
    int tc;
    cin>>tc;
    while(tc--) {
        solve();
    }
    return 0;
}
 