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
    int n,a,b;cin>>n>>a>>b;
    vector<int> v(n+2),ps(n+2,0);
    for(int i=1;i<=n;i++){
        cin>>v[i];
        ps[i] = (v[i]/a)*b;
    }
    for(int i=1;i<=n;i++)ps[i] += ps[i-1];
    int ans = 0;
    for(int i=1;i<=n;i++){
        int l = ps[i-1],r = ps[n] - ps[i],mid = v[i];
        ans = max(ans,l+r+mid);
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
 
 