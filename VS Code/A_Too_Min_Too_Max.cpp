#include<bits/stdc++.h>
using namespace std;

#define endl "\n"
#define RASHED ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
///#define show(x) cout << #x << " = " << x << endl
#define int long long int

void solve() {
    int n;
    cin>>n;
    vector<int> v;
    for(int i=0; i<n; i++) {
        int x;
        cin>>x;
        v.push_back(x);
    }
    sort(v.begin(),v.end());
    int sum = 0;
    sum += abs(v[n-1]-v[0]);
    sum += abs(v[n-2]-v[0]);
    sum += abs(v[n-2]-v[1]);
    sum += abs(v[n-1]-v[1]);
    cout<<sum<<endl;
}
signed main() {
    RASHED
    int tc;
    cin>>tc;
    while(tc--)solve();
    return 0;
}