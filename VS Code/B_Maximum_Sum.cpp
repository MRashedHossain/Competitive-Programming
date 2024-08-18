#include<bits/stdc++.h>
using namespace std;

#define endl "\n"
#define RASHED ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
///#define show(x) cout << #x << " = " << x << endl
#define int long long int
const int MOD = 1e9 + 7;

int solve() {
    int n,k;
    cin>>n>>k;
    int sum = 0,mx = 0,curr = 0,a[n+8];
    for(int i=0; i<n; i++)cin>>a[i];
    for(int i=0; i<n; i++) {
        sum += a[i];
        curr += a[i];
        curr = max(curr,0LL);
        mx = max(mx,curr);
    }
    sum = ((sum%MOD)+MOD)%MOD;
    mx = mx % MOD;
    int pw = 1,mxx = mx;
    for(int i=0; i<k; i++)pw = pw*2%MOD;
    return (sum+mx*pw-mx+MOD)%MOD;
}
signed main() {
    RASHED
    int TC;
    cin>>TC;
    while(TC--)cout<<solve()<<endl;
    return 0;
}
/**
CASES:

*/

