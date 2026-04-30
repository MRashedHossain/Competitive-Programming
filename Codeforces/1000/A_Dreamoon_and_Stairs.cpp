#include<bits/stdc++.h>
using namespace std;
 
#define endl "\n"
#define RASHED ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
///#define int long long int
 
void solve() {
 
}
int32_t main() {
    RASHED
    int n,k,ans;cin>>n>>k;
    if(n<k){
        cout<<-1<<endl;
        return 0;
    }
    if(n%2)ans = (n/2)+1;
    else ans = n/2;
    if(ans%k){
        ans+=(k-(ans%k));
    }
    cout<<ans<<endl;
    return 0;
}
 