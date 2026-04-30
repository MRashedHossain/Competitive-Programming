#include<bits/stdc++.h>
using namespace std;
 
#define endl "\n"
#define RASHED ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
///#define int long long int
 
void solve() {
    int n,x,ans = 0;
    cin>>n>>x;
    vector<int> v;
    v.push_back(0);
    for(int i=0; i<n; i++) {
        int k;
        cin>>k;
        v.push_back(k);
    }
    int k = v[n]+(x-v[n])*2;
    v.push_back(k);
    ///for(auto i:v)cout<<i<<" ";
    ///cout<<endl;
    for(int i=1;i<v.size();i++) {
        ans = max(ans,abs(v[i]-v[i-1]));
    }
    cout<<ans<<endl;
}
int32_t main() {
    RASHED
    int tc;
    cin>>tc;
    while(tc--)solve();
    return 0;
}
 