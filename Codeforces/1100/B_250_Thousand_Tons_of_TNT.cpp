#include<bits/stdc++.h>
using namespace std;
 
#define endl "\n"
#define RASHED ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
#define int long long int
 
void solve() {
    int n,ans = 0,a[150005]= {0};
    cin>>n;
    set<int> s;
    s.insert(1);
    for(int i=2; i<sqrt(n)+1; i++) {
        if(n%i == 0) {
            s.insert(i);
            s.insert(n/i);
        }
    }
    vector<int> div = {s.begin(),s.end()};
    vector<int> v;
    for(int i=1; i<=n; i++) {
        int k;
        cin>>k;
        v.push_back(k);
        a[i] = a[i-1]+k;
    }
    ///for(auto i:div)cout<<i<<" ";
    ///cout<<endl;
    for(int i=0; i<div.size(); i++) {
        vector<int> f;
        for(int j = div[i]; j<=n; j+=div[i]) {
            ///ans = max(ans,a[j]-a[j-div[i]]);
            f.push_back(a[j]-a[j-div[i]]);
        }
        sort(f.begin(),f.end());
        ans = max(ans,abs(f[0]-f[f.size()-1]));
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
/**
1
6
10 2 3 6 1 3
*/