#include<bits/stdc++.h>
using namespace std;
 
#define endl "\n"
#define RASHED ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
#define int long long int
#define MOD 1000000007
 
void solve() {
    int n,k;cin>>n>>k;
    int ans = 0,sum = 1;
        while(k){
            if(k%2)ans = (ans+sum)%MOD;
            sum = (sum*n)%MOD;
            k/=2;
        }
    cout<<ans<<endl;
}
int32_t main() {
    RASHED
    int tc;
    cin>>tc;
    while(tc--)solve();
    return 0;
}
 