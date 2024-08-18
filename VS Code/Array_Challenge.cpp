#include<bits/stdc++.h>
using namespace std;

#define endl "\n"
#define RASHED ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
///#define show(x) cout << #x << " = " << x << endl
#define int long long int

int solve() {
    int n;
    cin>>n;
    int ps[n+9] = {0},a[n+8];
    for(int i=1; i<=n; i++)cin>>a[i];
    vector<int> v;
    for(int i=1; i<=n; i++) {
        ps[i] = ps[i-1]+a[i];
    }
    int val = 0;
    for(int i=1; i<=n; i++) {
        if(val <= a[i])val = a[i];
    }
    for(int i=1; i<=n; i++) {
        if(a[i] == val)v.push_back(i);
    }
    int res = 0;
    for(auto i:v) {
        int idx = i;
        for(int i=1; i<idx; i++) {
            int fix = ps[n]-(ps[idx]-ps[i-1]);
            fix+=((idx-i+1)*a[idx]);
            res = max(res,fix);
        }
        for(int i=n; i>idx; i--) {
            int fix = ps[idx-1];
            fix+=(ps[n]-ps[i]);
            fix+=((i-idx+1)*a[idx]);
            res = max(res,fix);
        }
    }

    return res;
}
signed main() {
    RASHED
    cout<<solve()<<endl;
    return 0;
}
/**
CASES:

*/
