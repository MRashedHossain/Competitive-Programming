#include<bits/stdc++.h>
using namespace std;
 
#define RASHED ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
#define endl "\n"
#define int long long int
 
#define show(x) cout << #x << " = " << x << endl
#define inf (int)1e17
#define maxn 100010
 
#define F first
#define S second
 
int calcu(int n, int K, int maxLen,vector<int>& v) {
    if (K < 0 || maxLen <= 0) return 0;
    map<int,int> freq;
    int l = 1;
    int distinct = 0;
    int res = 0;
    for (int r = 1; r <= n; ++r) {
        if (++freq[v[r]] == 1) distinct++;
        while (distinct > K) {
            if (--freq[v[l]] == 0) { freq.erase(v[l]); distinct--; }
            ++l;
        }
        int mn = max(l, r - maxLen + 1);
        if (mn <= r) {
            res += (r - mn + 1);
        }
    }
    return res;
}
 
void solve(int tc) {
    int n, k, L, R;
    cin >> n >> k >> L >> R;
    vector<int> v(n+1);
    for (int i = 1; i <= n; ++i) cin >> v[i];
    int kr    = calcu(n, k,   R,   v);
    int kl  = calcu(n, k,   L-1, v);
    int kmr  = calcu(n, k-1, R,   v);
    int kl1= calcu(n, k-1, L-1, v);
    int ans = (kr - kl) - (kmr - kl1);
    cout << ans << endl;
}
 
signed main() {
    RASHED
    int TC = 1;
    cin >> TC;
    for (int i = 1; i <= TC; ++i) solve(i);
    return 0;
}