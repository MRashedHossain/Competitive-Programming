#include<bits/stdc++.h>
using namespace std;
 
#define endl "\n"
#define RASHED ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
#define show(x) cout << #x << " : " << x << endl
#define ll long long int
#define maxn 200100
 
ll n,k,fr[maxn] = {0},lv[maxn] = {0},h[maxn] = {0};
 
void clean() {
    memset(fr,0,sizeof fr);
    memset(lv,0,sizeof lv);
}
bool check(ll mid) {
    for (int i=mid; i<=n; i++) {
        if (fr[i]-fr[i-mid]<=k && lv[i] == lv[i-mid+1])return true;
    }
    return false;
}
void solve() {
    cin>>n>>k;
    for (int i=1; i<=n; i++) {
        ll x;
        cin>>x;
        fr[i] = fr[i-1]+x;
    }
    for (int i=1; i<=n; i++) {
        cin>>h[i];
        if(i == 1) {
            lv[i] = 1;
            continue;
        }
        if(h[i-1]%h[i] == 0)lv[i] = lv[i-1];
        else lv[i] = lv[i-1]+1;
    }
    /**
        for (int i=1; i<=n; i++)cout<<fr[i]<<" ";
        cout<<endl;
        for (int i=1; i<=n; i++)cout<<lv[i]<<" ";
        cout<<endl;
        return;
    */
    ll lo = 1,hi = n,ans = 0;
    while(lo<=hi) {
        ll mid = (hi+lo)/2;
        if(check(mid)) {
            ans = max(ans,mid);
            lo = mid+1;
        } else hi = mid-1;
        ///show(ans);
    }
    cout<<ans<<endl;
}
int main() {
    RASHED
    int tc;
    cin>>tc;
    while(tc--) {
        clean();
        solve();
    }
    return 0;
}
/**
4 8
10 3 9 5
1 3 2 3
*/
 