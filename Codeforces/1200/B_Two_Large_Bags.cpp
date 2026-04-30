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
 
void solve(int tc) {
    int n;cin >> n;
    int nn = n + n/2;
    vector<int> f(nn+1, 0);
    for (int i = 0; i < n; i++) {
        int x;cin >> x;f[x]++;
    }
 
    int mx = 2*n;
    vector<vector<bool>> dp(nn+2, vector<bool>(mx+1, false));
    dp[1][0] = true;
 
    for (int i = 1; i <= nn; i++) {
        for (int j = 0; j <= mx; j++) {
            if(!dp[i][j]) continue;
            int ff = f[i] + j;
            for (int k = 0; k <= ff; k++) {
                int r = ff - k;
                if(r % 2 != 0) continue;
                if(k > 0 && r < 2) continue;
 
                if(k <= mx) {
                    dp[i+1][k] = true;
                }
            }
        }
    }
    cout<<(dp[nn+1][0]?"Yes":"No")<<endl;
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