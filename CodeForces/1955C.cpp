#include<bits/stdc++.h>
using namespace std;

#define endl "\n"
#define RASHED ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);

#define int long long int
///#define show(x) cout << #x << " = " << x << endl
///#define maxn 200100

int solve(int tc) {
    int n,k;cin>>n>>k;
    int a[n+8],pf[n+8] = {0};
    for(int i=1;i<=n;i++)cin>>a[i];
    for(int i=1;i<=n;i++)pf[i] = pf[i-1]+a[i];

    if(pf[n] <= k)return n;

    int pos1 = LLONG_MIN,pos2 = LLONG_MIN;
    int vp1 = k/2,vp2 = k/2;
    if(k%2)vp1++;

    int lo = 1,hi = n;
    while(lo <= hi){
        int mid = (lo+hi)/2;
        if(pf[mid] <= vp1){
            pos1 = max(pos1,mid);
            lo = mid+1;
        }
        else hi = mid-1;
    }
    lo = 1,hi = n;
    while(lo <= hi){
        int mid = (lo+hi)/2;
        if(pf[n]-pf[mid] <= vp2){
            pos2 = max(pos2,n-mid);
            hi  = mid-1;
        }
        else lo = mid+1;
    }
    pos1 = max(pos1,0LL);
    pos2 = max(pos2,0LL);
    return min(pos1+pos2,n);
}
signed main() {
    RASHED
    int TC;cin>>TC;
    for(int i=1; i<=TC; i++)cout<<solve(i)<<endl;
    return 0;
}
/**
CASES:

*/

