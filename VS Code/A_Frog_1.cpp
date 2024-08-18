#include<bits/stdc++.h>
using namespace std;

#define endl "\n"
#define RASHED ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
///#define show(x) cout << #x << " = " << x << endl
#define int long long int
#define maxn 200005

void solve() {
    int n;
    cin>>n;
    vector<int> a(n+5),cost(n+4,999999999);
    cost[1] = 0;
    for(int i=1; i<=n; i++)cin>>a[i];
    for(int i=1; i<n; i++) {
        cost[i+1] = min(cost[i+1],cost[i]+abs(a[i]-a[i+1]));
        cost[i+2] = min(cost[i+2],cost[i]+abs(a[i]-a[i+2]));
    }
    cout<<cost[n]<<endl;
}

void solve2() {
    int n, A[maxn],DP[maxn];
    memset(A,0,sizeof A);
    memset(DP,0,sizeof DP);
    for (int i=1; i<=n; i++)cin >> A[i];
    DP[2] = abs(A[1]-A[2]);
    for (int i=3; i<=n; i++)DP[i] = min(DP[i-1]+abs(A[i-1]-A[i]),DP[i-2]+abs(A[i-1]-A[i]));
    cout << DP[n] << endl;
}

signed main() {
    RASHED
    solve();
    return 0;
}
/**
CASES:

*/

