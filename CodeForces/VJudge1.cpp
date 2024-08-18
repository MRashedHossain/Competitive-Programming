#include<bits/stdc++.h>
using namespace std;

#define endl "\n"
#define RASHED ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
///#define show(x) cout << #x << " = " << x << endl
#define int long long int

void solve() {
    int n;
    cin>>n;
    int a[n+8];
    vector<int> res;
    for(int i=1; i<=n; i++)cin>>a[i];
    res.push_back(a[1]);
    int sum = a[1];
    for(int i=2; i<=n; i++) {
        int val = a[i]-sum;
        res.push_back(val);
        sum += val;
    }
    for(auto i:res)cout<<i<<" ";
    cout<<endl;
}
signed main() {
    RASHED
    solve();
    return 0;
}
/**
CASES:

*/

