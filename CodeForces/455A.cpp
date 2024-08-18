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

vector<int> dp(maxn,-1),a(maxn,0);
int n,mn = inf,mx = -inf;

int dpp(int i){
    if(i>mx)return 0;
    if(dp[i] != -1)return dp[i];
    dp[i] = max(dpp(i+2)+(i*a[i]),dpp(i+1));
    return dp[i];
}
void solve(int tc) {
    cin>>n;
    for(int i=1;i<=n;i++){
        int x;cin>>x;
        a[x]++;
        mn = min(mn,x);mx = max(mx,x);
    }
    cout<<dpp(mn)<<endl;
}
signed main() {
    RASHED
    int TC = 1;
    ///cin>>TC;
    for(int i=1; i<=TC; i++)solve(i);
    return 0;
}
/**
CASES:

*/

