#include<bits/stdc++.h>
using namespace std;
 
#define RASHED ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
#define endl "\n"
#define int long long
 
#define sz(x) ((int)(x).size())
 
void solve(int tc) {
    int n; string s;
    cin >> n >> s;
    vector<int> gap;
    for (int i = 0; i < n; ++i) {
        if (s[i] == '1') gap.push_back(i + 1);
    }
    if (sz(gap) == 0) {
        cout << max(1LL, (n + 2) / 3) << endl;
        return;
    }
 
    int res = sz(gap);
    res += gap.front() / 3;
    for (int i = 1; i < sz(gap); i++) {
        int L = gap[i] - gap[i - 1] - 1;
        res += L / 3; 
    }
    res += (n - gap.back() + 1) / 3;
    cout << max(1LL, res) << endl;
}
 
signed main() {
    RASHED
    int TC = 1;
    cin >> TC;
    for (int i = 1; i <= TC; ++i) solve(i);
    return 0;
}