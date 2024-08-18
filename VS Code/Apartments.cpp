#include<bits/stdc++.h>
using namespace std;

#define endl "\n"
#define RASHED ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
///#define show(x) cout << #x << " = " << x << endl
#define int long long int

void solve() {
    int n,m,k;
    cin>>n>>m>>k;
    int a[n+5],b[m+7],ans = 0;
    for(int i=1; i<=n; i++)cin>>a[i];
    for(int i=1; i<=m; i++)cin>>b[i];
    sort(a+1,a+n+1);
    sort(b+1,b+m+1);
    int x = 0;
    for(int i=1; i<=n; i++) {
        int lo = x+1,hi = m,flg = INT_MAX;
        bool found = false;
        while(lo <= hi) {
            int mid = (lo+hi)/2;
            if(a[i]+k <= b[mid] && a[i]-k >= b[mid]) {
                found = true;
                flg = min(flg,mid);
                hi = mid-1;
            } else if(a[i]+k < b[mid])hi = mid-1;
            else if(a[i]-k > b[mid])lo = mid+1;
        }
        if(found) {
            ans++;
            x = flg;
        }
    }
    cout<<ans<<endl;
}
signed main() {
    RASHED
    solve();
    return 0;
}

