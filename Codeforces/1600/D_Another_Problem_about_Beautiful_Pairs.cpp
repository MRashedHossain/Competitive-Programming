#include<bits/stdc++.h>
using namespace std;
 
#define RASHED ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
//#define endl "\n"
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
     int n;
        cin >> n;
        vector<int> a(n + 2);
        for (int i = 1; i <= n; i++) cin >> a[i];
        vector<vector<int>> pos(n + 2);
        for (int i = 1; i <= n; i++) {
            if (a[i] <= n) pos[a[i]].push_back(i);
        }
        int ans = 0;
        for (int v = 1; v <= n; v++) {
            if (pos[v].empty()) continue;
            for (int u = 1; v * u <= n; u++) {
                if (pos[u].empty()) continue;
                for (int i_idx : pos[v]) {
                    int j = i_idx + v * u;
                    if (j > n) continue;
                    if (a[j] == u) ++ans;
                }
            }
        }
        cout << ans << '\n';
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