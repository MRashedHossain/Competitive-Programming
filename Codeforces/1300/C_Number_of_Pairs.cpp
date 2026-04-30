#include<bits/stdc++.h>
using namespace std;
 
#define endl "\n"
#define RASHED ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
#define ll long long int
///#define inf 99999999999999999
///#define F first
///#define S second
#define show(x) cout << #x << " : " << x << endl
#define maxn 200100
 
void clean() {
 
}
ll solve() {
    ll n,l,r,ans = 0,a[maxn] = {-1};
    cin>>n>>l>>r;
    for (int i=1; i<=n; i++) cin>>a[i];
    sort(a+1,a+n+1);
    for (int i=1; i<=n-2; i++) {
        ll hi = n,lo = i+1,flg = 0,_r = -1,_l = -1;
        while(lo<=hi) {
            ll mid = (lo+hi)/2;
            if(a[mid]+a[i] >= l) {
                _l = mid;
                hi = mid-1;
            } else lo = mid+1;
        }
        hi = n,lo = i+1;
        while(lo<=hi) {
            ll mid = (lo+hi)/2;
            if(a[mid]+a[i] <= r) {
                _r = mid;
                lo = mid+1;
            } else hi = mid-1;
        }
        if (_l == -1 || _r == -1)continue;
        else {
            ans+=(_r-_l+1);
        }
    }
    if (a[n]+a[n-1] >= l && a[n]+a[n-1] <= r)ans++;
    return ans;
}
int main() {
    RASHED
    int tc;
    cin>>tc;
    while(tc--) {
        cout<<solve()<<endl;
    }
    return 0;
}