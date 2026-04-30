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
    int n;cin>>n;
    vector<int> a(n+2);
    map<int,int> dp;
    for(int i=1;i<=n;i++)cin>>a[i];
 
    int res = 0,pos = 0;
 
    vector<int> ans;
 
    for(int i=1;i<=n;i++){
        dp[a[i]] = max(dp[a[i]],1 + dp[a[i]-1]);
        if(dp[a[i]] > pos){
            res = a[i];
            pos = dp[res];
        }
    }
 
    // for(int i=1;i<=n;i++){
    //     cout<<a[i]<<" : ";
    //     cout<<dp[a[i]]<<" ";
    //     cout<<endl;
    // }
 
    // show(res);
 
    for(int i=n;i>=1 && res;i--){
        if(a[i] == res){
            ans.push_back(i);
            res--;
        }
    }
 
    reverse(all(ans));
 
    cout<<sz(ans)<<endl;
    for(auto i:ans)cout<<i<<" ";
 
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
 
 