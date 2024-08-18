#include<bits/stdc++.h>
using namespace std;

#define endl "\n"
#define RASHED ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
///#define show(x) cout << #x << " = " << x << endl
#define int long long int

void solve() {
    int n,k;
    cin>>n>>k;
    vector<int> a(n+5),dp(n+4,999999999);
    dp
    [1] = 0;
    for(int i=1; i<=n; i++)cin>>a[i];
    for(int i=1; i<=n; i++) {
        for(int j = i+1;j <= i+k && j <= n;j++)cost[j] = min(cost[j],cost[i]+abs(a[i]-a[j]));
    }
    cout<<cost[n]<<endl;
}
signed main() {
    RASHED
    solve();
    return 0;
}
/**
CASES:

*/


