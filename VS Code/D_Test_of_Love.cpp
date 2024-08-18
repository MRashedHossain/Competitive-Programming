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
int n,m,k;
vector<int> dp(200010,inf);
string s;
int dpp(int curr,int cst){
    if(curr >= n){
        dp[n] = min(dp[n],cst);
        return dp[n];
    }
    if(s[curr] == 'C')return inf+cst;
    else if(s[curr] == 'W')dp[curr] = min(dp[curr],dpp(curr+1,cst+1));
    else {
        for(int i=1;i<=m;i++){
            dp[curr] = min(dp[curr],dpp(curr+i,cst));
        }
    }
    return dp[curr];
}
bool solve(int tc) {
    cin>>n>>m>>k;
    cin>>s;
    for(int i=1;i<=m;i++){
        dp[0] = min(dp[0],dpp(i,0));
    }
    bool res = false;
    if(dp[n] != inf && dp[n] <= k)res = true;
    for(int i=0;i<=n+1;i++){
        dp[i] = inf;
    }
    return res;
}
signed main() {
    RASHED
    int TC = 1;
    cin>>TC;
    for(int i=1; i<=TC; i++)cout<<(solve(i)?"YES":"NO")<<endl;
    return 0;
}
/**
CASES:

*/
