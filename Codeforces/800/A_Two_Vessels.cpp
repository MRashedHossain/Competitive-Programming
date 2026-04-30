#include<bits/stdc++.h>
using namespace std;
 
#define endl "\n"
#define FAST ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
#define show(x) cout << #x << " : " << x << endl
#define ll long long int
#define maxn 100100
 
void clean() {
 
}
void solve() {
    ll a,b,c;
    cin>>a>>b>>c;
    ll ans = abs(a-b);
    ans = (ans+1)/2;
    if (ans % c)ans = (ans/c)+1;
    else ans = (ans/c);
    cout<<ans<<endl;
}
int main() {
    int tc;
    cin>>tc;
    while(tc--) {
        solve();
    }
    return 0;
}