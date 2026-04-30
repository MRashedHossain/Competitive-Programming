#include<bits/stdc++.h>
using namespace std;
 
#define endl "\n"
#define RASHED ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
///#define int long long int
 
void solve() {
 
}
signed main() {
    RASHED
    int n;cin>>n;
    pair<int,int> a[n+8];
    for(int i=0;i<n;i++)cin>>a[i].first>>a[i].second;
    sort(a,a+n);
    int ans = 0;
    for(int i=0;i<n;i++){
        if(a[i].second >= ans)ans = a[i].second;
        else ans = a[i].first;
    }
    cout<<ans<<endl;
    return 0;
}
 