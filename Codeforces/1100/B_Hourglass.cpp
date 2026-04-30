#include<bits/stdc++.h>
using namespace std;
 
#define RASHED ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
#define endl "\n"
#define int long long
 
void solve(int tc) {
      int s, k, m;
        cin >> s >> k >> m;
        int n = m / k;
        int R;
        if (s <= k) R = s;
        else R = (n % 2 == 0 ? s : k);
        int delta = m - n * k;
        int ans = R - delta;
        if (ans < 0) ans = 0;
        cout << ans << endl;
}
 
signed main() {
    RASHED
    int TC;
    cin >> TC;
    for(int i = 1; i <= TC; i++) solve(i);
    return 0;
}