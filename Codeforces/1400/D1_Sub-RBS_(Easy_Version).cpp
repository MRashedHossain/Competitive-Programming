#include<bits/stdc++.h>
using namespace std;
 
#define RASHED ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
#define endl "\n"
#define int long long int
 
#define show(x) cout << #x << " = " << x << endl
#define inf (int)1e17
#define maxn 100010
 
#define all(x) (x).begin(), (x).end()
#define rall(x) (x).rbegin(), (x).rend()
#define sz(x) ((int)(x).size())
 
#define F first
#define S second
 
void solve(int tc) {
    int n;
    string s;
    cin>>n>>s;
    vector<int> po(n+1,0), pc(n+1,0);
    for (int i = 1; i <= n; ++i) {
        po[i] = po[i-1] + (s[i-1]=='(');
        pc[i] = pc[i-1] + (s[i-1]==')');
    }
    int ans = -1;
    for (int i = 1; i <= n; ++i) {
        if (s[i-1] == ')') {
            int l = po[i-1];
            int r = pc[i-1];
            int d = l - r;
            int ll = po[n] - po[i];
            int rr = pc[n] - pc[i];
            int can = rr - d;
            if (can <= 0) continue;
            int mx = min(ll, can);
            if (mx >= 1) {
                int now = (i-1) + (2 * mx) + d;
                ans = max(ans, now);
            }
        }
    }
    cout<<ans<<endl;
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
 
 