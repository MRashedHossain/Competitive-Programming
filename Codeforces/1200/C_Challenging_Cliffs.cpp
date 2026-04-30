#include<bits/stdc++.h>
using namespace std;
 
#define endl "\n"
#define RASHED ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
///#define int long long int
 
void solve() {
    int n,x=-1,flg = INT_MAX;
    cin>>n;
    int a[n+8],b[n+8];
    memset(b,0,sizeof b);
    for(int i=1; i<=n; i++)cin>>a[i];
    sort(a+1,a+n+1);
    if(n==2){
        cout<<a[1]<<" "<<a[2]<<endl;
        return;
    }
    for(int i=1; i<n; i++) {
        if(abs(a[i]-a[i+1]) < flg) {
            x = i+1;
            flg = abs(a[i]-a[i+1]);
        }
    }
    ///cout<<x<<endl;
    for(int i=x;i<=n;i++)cout<<a[i]<<" ";
    for(int i=1;i<x;i++)cout<<a[i]<<" ";
    cout<<endl;
}
signed main() {
    RASHED
    int tc;
    cin>>tc;
    while(tc--)solve();
    return 0;
}
 