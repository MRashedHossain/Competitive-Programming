#include<bits/stdc++.h>
using namespace std;
 
#define endl "\n"
#define FAST ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
#define show(x) cout << #x << " : " << x << endl
#define ll long long int
#define maxn 200100
 
ll n,k;
vector<ll> v;
 
bool check(ll mid) {
    ll res = k;
    for (int i = 0; i<n; i++) {
        res-=max(0LL,mid-v[i]);
    }
    if(res<0)return false;
    return true;
}
void solve() {
    v.clear();
    cin>>n>>k;
    for (int i=0; i<n; i++) {
        ll x;
        cin>>x;
        v.push_back(x);
    }
    ll lo = 0, hi = 10000000000,mid,ans = 0;
    while(lo <= hi) {
        mid = (hi+lo)/2;
        if(check(mid)) {
            ans = max(ans,mid);
            lo = mid+1;
        } else {
            hi = mid-1;
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