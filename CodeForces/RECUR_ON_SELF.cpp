#include<bits/stdc++.h>
using namespace std;

#define endl "\n"
#define RASHED ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
///#define show(x) cout << #x << " = " << x << endl
///#define int long long int

void solve() {
    int n, k;
    std::cin >> n >> k;
    std::vector<std::vector<int>> adj(n);
    for (int i = 0; i < n - 1; i++) {
        int v, u;
        std::cin >> v >> u;
        --v, --u;
        adj[v].emplace_back(u);
        adj[u].emplace_back(v);
    }
    auto check = [&](int x) {
        int res = 0;
        auto dfs = [&](auto self, int v, int f) -> int {
            int sz = 1;
            for (int u : adj[v]) {
                if (u == f) {
                    continue;
                }
                sz += self(self, u, v);
            }
            if (sz >= x && f != v) {
                ++res, sz = 0;
            }
            return sz;
        };
        int t = dfs(dfs, 0, 0);
        return (res > k || (t >= x && res == k) ? true : false);
    };
    int low = 1, high = n / (k + 1) + 1;
    while (high - low > 1) {
        int mid = (low + high) / 2;
        if (check(mid)) {
            low = mid;
        } else {
            high = mid;
        }
    }
    std::cout << low << "\n";
}
signed main() {
    RASHED
    int TC;
    cin>>TC;
    while(TC--)solve();
    return 0;
}
/**
CASES:

*/
