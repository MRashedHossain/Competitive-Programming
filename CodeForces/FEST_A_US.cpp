#include<bits/stdc++.h>
using namespace std;

#define endl "\n"
#define RASHED ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
///#define show(x) cout << #x << " = " << x << endl
#define int long long int

void solve() {
    int n;
    cin>>n;
    int a[n+8],res[n+8];
    vector<int> v[105];
    for(int i=1; i<=n; i++) {
        cin>>a[i];
        v[a[i]].push_back(i);
    }
    for(int i=1; i<=n; i++) {
        int x = a[i],pos = INT_MAX;
        for(int j = x+1; j<=100; j++) {
            if(v[j].empty())continue;
            int lo = 0,hi = v[j].size()-1;
            while(lo<=hi) {
                int mid = (lo+hi)/2;
                if(v[j][mid] > i) {
                    pos = min(pos,v[j][mid]-i);
                    hi = mid-1;
                } else lo = mid+1;
            }
        }
        if(pos == INT_MAX)res[i] = 0;
        else res[i] = pos;
    }
    for(int i=1; i<=n; i++)cout<<res[i]<<" ";
    cout<<endl;
}
signed main() {
    RASHED
    solve();
    return 0;
}

