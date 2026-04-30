#include<bits/stdc++.h>
using namespace std;
 
#define endl "\n"
#define RASHED ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
///#define int long long int
 
void solve() {
 
}
signed main() {
    RASHED
    int n,mn = INT_MAX,mx = INT_MIN,ans = 0;
    cin>>n;
    int a[n+8];
    for(int i=1; i<=n; i++) {
        cin>>a[i];
        mn = min(mn,a[i]);
        mx = max(mx,a[i]);
    }
    for(int i=1; i<=n; i++) {
        if(a[i] == mx) {
            ans = i;
            break;
        }
    }
    for(int i = n; i>0; i--) {
        if(a[i] == mn) {
            if(i<ans){
                ans--;
                ans+=(n-i-1);
            }
            else {
                ans--;
                ans+=(n-i);
            }
            break;
        }
    }
    cout<<ans<<endl;
    return 0;
}
 