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
    cin>>n;
    vector<int> v(n),f(n+2,0),unq;
    for(int i=0; i<n; i++) {
        cin>>v[i];
        f[v[i]]++;
    }
    for(int i=1; i<=n; i++) {
        if(f[i])unq.push_back(i);
    }
    vector<int> dp(n+2,inf);
    dp[1] = 0;
    for(int i=1; i<=n; i++) {
        if(dp[i] == inf)continue;
        for(auto j:unq) {
            int can = i*j;
            if(can > n)break;
            if(dp[can] > dp[i]+1)dp[can] = dp[i]+1;
        }
    }
    if(f[1])cout<<1<<" ";
    else cout<<-1<<" ";
    for(int i=2; i<=n; i++) {
        int ans = (dp[i] == inf?-1:dp[i]);
        cout<<ans<<" ";
    }
    cout<<endl;
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
 
 