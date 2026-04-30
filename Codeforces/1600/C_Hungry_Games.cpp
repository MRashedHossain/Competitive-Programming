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
    int n,k;cin>>n>>k;
    vector<int> v(n+4,0),dp(n+4,0);
    for(int i=1;i<=n;i++){
        int x;cin>>x;v[i]+=(v[i-1]+x);
    }
    if(v[n]-v[n-1]<=k)dp[n] = 1;
    for(int i=n-1;i>=1;i--){
        int lo = i,hi = n,pos = -1,val = v[i-1]+k;
        while(lo<=hi){
            int mid = (lo+hi)/2;
            if(v[mid]>val){
                pos = mid;
                hi = mid-1;
            }else lo = mid+1;
        }
        if(pos == -1)dp[i] = n-i+1;
        else dp[i] = dp[pos+1]+pos-i;
    }
    int res = 0;
    for(auto i:dp)res+=i;
    cout<<res<<endl;
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
6 3
1 2 1 4 3  8
1 3 4 8 11 19
5 10
1 2 3 3 1
*/
 