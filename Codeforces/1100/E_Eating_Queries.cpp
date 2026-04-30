#include<bits/stdc++.h>
using namespace std;
 
#define endl "\n"
#define RASHED ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
#define ll long long int
#define inf 99999999999999999
///#define F first
///#define S second
///#define show(x) cout << #x << " : " << x << endl
#define maxn 200100
 
void clean() {
 
}
void solve() {
    ll n,q,a[maxn] = {0};
    cin>>n>>q;
    vector<ll> v;
    for (int i = 1; i<=n; i++) {
        ll x;
        cin>>x;
        v.push_back(x);
    }
    sort(v.rbegin(),v.rend());
    for (int i = 0; i<n; i++) a[i+1] = a[i]+v[i];
    while(q--) {
        ll x,hi = n,lo = 1,ans = inf;
        cin>>x;
        while(lo<=hi) {
            ll mid = (lo+hi)/2;
            if(a[mid] >= x) {
                ans = min(ans,mid);
                hi = mid-1;
            } else lo = mid+1;
        }
        if (ans == inf)cout<<-1<<endl;
        else cout<<ans<<endl;
    }
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