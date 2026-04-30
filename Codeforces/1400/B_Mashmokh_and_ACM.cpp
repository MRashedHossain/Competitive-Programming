#include<bits/stdc++.h>
using namespace std;
 
#define RASHED ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
#define endl "\n"
#define int long long int
 
#define show(x) cout << #x << " = " << x << endl
#define inf (int)1e17
#define maxn 2005
 
#define all(x) (x).begin(), (x).end()
#define rall(x) (x).rbegin(), (x).rend()
#define sz(x) ((int)(x).size())
 
#define F first
#define S second
 
const int M = 1000000007;
 
int n,m;
int dp[maxn][maxn];
 
int dpp(int idx,int val) {
    if(idx > m)return 1;
    if(dp[idx][val] != -1)return dp[idx][val];
 
    int ans = 0,tmp = val;
    while(tmp <= n) {
        ans += (dpp(idx+1,tmp))%M;
        ans %= M;
        tmp += val;
    }
    return dp[idx][val] = ans;
}
 
void solve(int tc) {
    cin>>n>>m;
 
    memset(dp,-1,sizeof(dp));
 
    cout<<dpp(1,1)<<endl;
}
signed main() {
    RASHED
    int TC = 1;
    //cin>>TC;
    for(int i=1; i<=TC; i++)solve(i);
    return 0;
}
/**
CASES:
 
*/
 
 