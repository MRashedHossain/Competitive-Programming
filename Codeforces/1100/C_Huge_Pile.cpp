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
 
int n,k;
 
int dpp(int nn,map<int,int> &dp,map<int,int> &vis){
    if(nn < k)return inf;
    if(nn == k)return 0;
    if(vis[nn])return dp[nn];
    vis[nn]++;
    int ll = (nn/2),rr = (nn/2);
    if(nn%2)rr++;
    int ans = 1+min(dpp(ll,dp,vis),dpp(rr,dp,vis));
    return dp[nn] = ans;
}
 
void solve(int tc) {
    cin>>n>>k;
    map<int,int> dp,vis;
    dp[k] = 1;
    vis[k]++;
    int l = n/2,r = n/2;
    if(n%2)r++;
    int ans = dpp(n,dp,vis);
    cout<<(ans > n?-1:ans)<<endl;
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
 
 