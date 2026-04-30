#include<bits/stdc++.h>
using namespace std;
 
#define endl "\n"
#define RASHED ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
#define int long long int
 
void solve() {
    int n,ans = 0,pre = 0;
    cin>>n;
    for(int i=0; i<n; i++) {
        int x;
        cin>>x;
        if(!i) {
            ans+=(x-1);
            pre = x;
            continue;
        }
        if(x>pre) {
            ans+=(x-pre);
            pre = x;
        } else pre = x;
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
 