#include<bits/stdc++.h>
using namespace std;
 
#define endl "\n"
#define RASHED ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
///#define int long long int
 
void solve() {
    int n,a[200005],mn = 9999999999;
    cin>>n;
    for(int i=1; i<=n; i++) {
        cin>>a[i];
        mn = min(mn,a[i]);
    }
    int start = 0;
    for(int i=1; i<=n; i++) {
        if(mn == a[i]) {
            start = i;
            break;
        }
    }
    bool flag = true;
    for(int i=start; i<n; i++) {
        if(a[i]>a[i+1]) {
            flag = false;
            break;
        }
    }
    if(flag)cout<<start-1<<endl;
    else cout<<-1<<endl;
}
int32_t main() {
    RASHED
    int tc;
    cin>>tc;
    while(tc--)solve();
    return 0;
}
 