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
    int n; cin >> n;
    vector<int> v(n+2), dp(7,inf), now_dp(7,inf);
    for(int i=1;i<=n;i++) cin >> v[i];
 
    for(int i=1;i<=6;i++){
        dp[i] = (v[1] != i);
    }
 
    for(int i=2;i<=n;i++){
        for(auto &ii:now_dp) ii = inf;
 
        for(int j=1;j<=6;j++){
            int l = (v[i] != j), r = inf;
 
            for(int k=1;k<=6;k++){
                if(j == k || j+k == 7) continue;
                r = min(r, dp[k]);
            }
            now_dp[j] = (r == inf ? inf : l + r);
        }
        dp.swap(now_dp);
    }
    int ans = inf;
    for(int i=1;i<=6;i++) ans = min(ans, dp[i]);
    cout << ans << endl;
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