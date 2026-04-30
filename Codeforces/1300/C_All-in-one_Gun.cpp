#include<bits/stdc++.h>
using namespace std;
 
#define RASHED ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
#define endl "\n"
#define int long long int
 
#define show(x) cout << #x << " = " << x << endl
#define inf (int)1e17
#define maxn 200010
 
#define all(x) (x).begin(), (x).end()
#define rall(x) (x).rbegin(), (x).rend()
#define sz(x) ((int)(x).size())
 
#define F first
#define S second
 
void solve(int tc) {
    int n,h,k;
    cin>>n>>h>>k;
    vector<int> a(n+2),pref(n+2,inf),suff(n+2,-inf),ps(n+2,0);
    for(int i=1; i<=n; i++)cin>>a[i];
    for(int i=1; i<=n; i++)ps[i] = ps[i-1] + a[i];
    for(int i=1; i<=n; i++)pref[i] = min(pref[i-1],a[i]);
    for(int i=n; i>=1; i--)suff[i] = max(suff[i+1],a[i]);
 
    int ans = inf,tmp = 0;
    if(h)tmp = (h+ps[n]-1)/ps[n];
    ans = tmp*n + (tmp-1)*k;
    ans = max(ans,0LL);
 
    for(int i=1; i<=n; i++) {
        int now = ps[i],l = pref[i],r = suff[i+1];
        if(r > l)now = max(now,now-l+r);
        int need = h-now;
        int curr;
        if(need <= 0)curr = 0;
        else curr = (need+ps[n]-1)/ps[n];
        int res = (curr*(n+k))+i;
        ans = min(ans,res);
    }
    cout<<ans<<endl;
 
}
signed main() {
    RASHED
    int TC = 1;
    cin>>TC;
    for(int i=1; i<=TC; i++)solve(i);
    return 0;
}
/**
CASES:
 
*/