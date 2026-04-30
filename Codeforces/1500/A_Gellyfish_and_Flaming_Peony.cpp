#include<bits/stdc++.h>
using namespace std;
 
#define RASHED ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
#define endl "\n"
#define int long long int
 
#define show(x) cout << #x << " = " << x << endl
#define inf (int)1e17
#define maxn 100010
 
#define F firsta
#define S second
int g[5005][5005];
void solve(int tc) {
    int n;
    cin>>n;
    vector<int> v(n);
    for(int i=0; i<n; i++)cin>>v[i];
    sort(v.begin(),v.end());
    int gc = v.front();
    for(int i=1; i<n; i++)gc = __gcd(gc,v[i]);
    if(gc == v.front()) {
        int idx = 0;
        while(v[idx] == gc && idx < n)idx++;
        cout<<n-idx<<endl;
        return;
    }
    vector<int> f(5005,inf);
    for(int i=0; i<n; i++)f[v[i]] = 0;
    int mx = v.back();
    //12 20 30
    for(int i=mx; i>=1; i--) {
        for(int j=0; j<n; j++) {
            int uu = i,vv = v[j];
            int cg = g[uu][vv];
            f[cg] = min(f[cg],f[uu]+1);
        }
    }
    cout<<n-1+f[gc]<<endl;
}
signed main() {
    RASHED
    for(int x = 0 ; x < 5001 ; x ++) g[x][0] = g[0][x] = g[x][x] = x;
    for(int x = 1 ; x < 5001 ; x ++) for(int y = 1 ; y < x ; y ++) g[x][y] = g[y][x] = g[y][x % y];
    int TC = 1;
    cin>>TC;
    for(int i=1; i<=TC; i++)solve(i);
    return 0;
}
/**
CASES:
 
*/
 