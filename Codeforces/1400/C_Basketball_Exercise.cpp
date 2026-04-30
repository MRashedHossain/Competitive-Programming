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
 
int n;
int a[3][maxn];
int dp[3][maxn];
 
int dpp(int op,int idx){
    if(idx > n)return 0;
    if(dp[op][idx] != -1)return dp[op][idx];
 
    int nisi = 0,nei_nai = 0;
    nisi = a[op][idx]+dpp((op^1),idx+1);
    nei_nai = max(dpp(op,idx+1),dpp(op^1,idx+1));
 
    return dp[op][idx] = max(nisi,nei_nai);
}
 
void solve(int tc) {
    cin>>n;
    for(int i=0;i<=1;i++)for(int j=1;j<=n;j++)cin>>a[i][j];
 
    memset(dp,-1,sizeof(dp));
 
    cout<<max(dpp(0,1),dpp(1,1))<<endl;
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
 
 