#include<bits/stdc++.h>
using namespace std;
 
#define RASHED ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
#define endl "\n"
#define int long long int
 
#define show(x) cout << #x << " = " << x << endl
#define inf (int)1e17
#define maxn 100010
 
#define all(x) (x).begin(), (x).end()
#define rall(x) (x).rbegin(), (x).rend()
#define sz(x) ((int)(x).size())
 
#define F first
#define S second
 
void solve(int tc) {
    int n,q;cin>>n>>q;
    vector<int> a(n+2),b(n+2),c(n+2),ps(n+2,0);
    for(int i=1;i<=n;i++)cin>>a[i];
    for(int i=1;i<=n;i++)cin>>b[i];
    c[n] = max(a[n],b[n]);
    for(int i=n-1;i>=1;i--)c[i] = max(b[i],max(c[i+1],a[i]));
    // for(int i=1;i<=n;i++)cout<<c[i]<<" ";
    // cout<<endl;
    for(int i=1;i<=n;i++)ps[i] = ps[i-1]+c[i];
    while(q--){
        int l,r;cin>>l>>r;
        int ans = ps[r] - ps[l-1];
        cout<<ans<<" ";
    }
    cout<<endl;
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
 
 