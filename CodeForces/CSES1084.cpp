#include<bits/stdc++.h>
using namespace std;

#define endl "\n"
#define RASHED ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
///#define show(x) cout << #x << " = " << x << endl
#define int long long int

void solve() {
    int n,m,k,ans = 0;
    cin>>n>>m>>k;
    vector<int> a,b;
    for(int i=0; i<n; i++) {
        int x;
        cin>>x;
        a.push_back(x);
    }
    for(int i=0; i<m; i++) {
        int x;
        cin>>x;
        b.push_back(x);
    }
    sort(a.begin(),a.end());
    sort(b.begin(),b.end());
    int x = 0;
    for(int i=0; i<n; i++) {
        int lo = x,hi = m-1,flg = INT_MAX;
        bool found = false;
        while(lo <= hi) {
            int mid = (lo+hi)/2;
            if(b[mid] <= a[i]+k && b[mid] >= a[i]+k) {
                found = true;
                flg = min(flg,mid);
                hi = mid-1;
            } else if(b[mid] > a[i]+k)hi = mid-1;
            else if(b[mid] < a[i]-k)lo = mid+1;
        }
        if(found) {
            ans++;
            x = flg+1;
        }
    }
    cout<<ans<<endl;
}
signed main() {
    RASHED
    solve();
    return 0;
}

