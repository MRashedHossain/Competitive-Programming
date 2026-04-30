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
    ll n,ans = 0;
    cin>>n;
    set<ll> s;
    map<ll,ll> freq,sum;
    for(ll i=0; i<n; i++) {
        ll x;
        cin>>x;
        freq[x]++;
        s.insert(x);
    }
    for(auto i : s) {
        for(ll j=1; (i*j)<=n; j++) {
            sum[i*j]+=freq[i];
        }
    }
    /**
    for(int i=1; i<=n; i++) {
        cout<<i<<" : "<<freq[i]<<endl;
    }
    */
    for(auto i:sum) {
        ans = max(ans,i.second);
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