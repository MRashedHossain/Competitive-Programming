#include<bits/stdc++.h>
using namespace std;
 
#define RASHED ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
#define endl "\n"
#define int long long int
 
#define show(x) cout << #x << " = " << x << endl
#define inf (int)1e18
#define maxn 100010
 
#define F first
#define S second
 
void solve(int tc) {
    int n;
    cin>>n;
    int grid[n+2][n+2];
    for(int i=1; i<=n; i++) {
        for(int j=1; j<=n; j++) {
            cin>>grid[i][j];
        }
    }
    vector<int> f(2*n,0);
    for(int i=1; i<=n; i++) {
        for(int j=1; j<=n; j++) {
            f[i-j+n] = min(f[i-j+n],grid[i][j]);
        }
    }
    int res = 0;
    for(auto i:f)res += abs(i);
    cout<<res<<endl;
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
 