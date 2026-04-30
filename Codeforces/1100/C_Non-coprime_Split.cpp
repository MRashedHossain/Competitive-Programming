#include<bits/stdc++.h>
using namespace std;
 
#define endl "\n"
#define FAST ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
#define show(x) cout << #x << " : " << x << endl
#define ll long long int
#define maxn 100100
 
ll prime(ll x) {
    ll ans = 0;
    for (int i=2; i*i<=x; i++) {
        if (x%i == 0)ans = i;
    }
    return ans;
}
void solve() {
    ll a,b,ans = -1;
    cin>>a>>b;
    for (ll i=a; i<=b; i++) {
        if (i>2) {
            if (i%2) {
                ll x = prime(i);
                if (x) {
                        ll _a = i/x;
                    cout<<i-_a<<" "<<_a<<endl;
                    return;
                }
            } else {
                cout<<i/2<<" "<<i/2<<endl;
                return;
            }
        }
    }
    cout<<ans<<endl;
}
int main() {
    FAST
    int tc;
    cin>>tc;
    while(tc--) {
        solve();
    }
    return 0;
}