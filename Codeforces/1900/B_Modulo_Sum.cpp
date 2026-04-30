#include<bits/stdc++.h>
using namespace std;
 
#define RASHED ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
#define endl "\n"
#define int long long int
 
#define show(x) cout << #x << " = " << x << endl
#define inf (int)1e17
#define maxn 1005
 
#define all(x) (x).begin(), (x).end()
#define rall(x) (x).rbegin(), (x).rend()
#define sz(x) ((int)(x).size())
 
#define F first
#define S second
 
int n,m;
int a[maxn];
int dp[maxn][maxn][2];
 
int dpp(int idx,int sum,int p) {
    if(idx > n)return (sum == 0 && p);
    if(dp[idx][sum][p] != -1)return dp[idx][sum][p];
 
    int ans = 0;
    ans |= dpp(idx+1,sum,p);
    ans |= dpp(idx+1,(sum+a[idx])%m,1);
    return dp[idx][sum][p] = ans;
}
 
void solve(int tc) {
    cin>>n>>m;
    if(n > m) {
        for(int i=1; i<=n; i++) {
            int x;
            cin>>x;
        }
        cout<<"YES"<<endl;
        return;
    }
    for(int i=1; i<=n; i++) {
        cin>>a[i];
        a[i] %= m;
    }
    memset(dp,-1,sizeof(dp));
    int res = dpp(1,0,0);
    cout<<(res?"YES":"NO")<<endl;
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
 
 