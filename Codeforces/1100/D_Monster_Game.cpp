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
    int n;
    cin>>n;
    vector<int> a(n),b(n),ps(n,0);
    for(int &i:a)cin>>i;
    for(int &i:b)cin>>i;
    ps[0] = b[0];
    for(int i=1; i<n; i++)ps[i] = ps[i-1]+b[i];
    sort(all(a));
    int ans = 0,idx = 0;
    for(int idx=0; idx<n; idx++) {
        int curr = a[idx],need = n - idx;
        int res = upper_bound(ps.begin(), ps.end(), need) - ps.begin();
        ans = max(ans,res*curr);
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
 
 