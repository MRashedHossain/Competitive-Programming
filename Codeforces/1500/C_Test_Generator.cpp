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
 
bool check(int n, int s, int m) {
    int rem = s;
    for (int i = 60; i >= 0; i--) {
        if ((m >> i) & 1LL) {
            if (i >= 62) continue;
            int val = 1LL << i;
            if (val > rem) continue;
            int take = rem / val;
            if (take > n) take = n;
            rem -= (take * val);
            if (rem == 0) return true;
        }
    }
    return (rem == 0);
}
 
void solve(int tc) {
    int n, m;
    cin >>n>>m;
    int lo = (n + m - 1)/m,hi = n,ans = -1;
    while (lo <= hi) {
        int mid = (lo+hi)/2;
        if (check(mid, n, m)) {
            ans = mid;
            hi = mid - 1;
        } else {
            lo = mid + 1;
        }
    }
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
 