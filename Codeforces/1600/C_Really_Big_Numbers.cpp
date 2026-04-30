#include<bits/stdc++.h>
using namespace std;
 
#define endl "\n"
#define RASHED ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
#define int long long int
int digitsum(int n) {
    int sum = 0;
    while(n) {
        sum+=(n%10);
        n/=10;
    }
    return sum;
}
void solve() {
    int n,k;
    cin>>n>>k;
    int hi = n,lo = 0,ans = n+9;
    while(lo<=hi) {
        int mid = (lo+hi)/2;
        if(mid-digitsum(mid) >= k) {
            ans = min(ans,mid);
            hi = mid-1;
        } else lo = mid+1;
    }
    cout<<max(0LL,n-ans+1)<<endl;
}
int32_t main() {
    RASHED
    solve();
    return 0;
}
 