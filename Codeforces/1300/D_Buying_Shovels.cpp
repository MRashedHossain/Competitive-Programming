#include<bits/stdc++.h>
using namespace std;
 
#define endl "\n"
#define RASHED ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
#define int long long int
 
void solve() {
    int n,k;cin>>n>>k;
    if(k>=n){
        cout<<1<<endl;return;
    }
    set<int> s = {1};
    for(int i=2;i<=sqrt(n)+1;i++){
        if(n%i == 0){
            s.insert(i);
            s.insert(n/i);
        }
    }
    vector<int>div = {s.begin(),s.end()};
    int ans = LONG_MAX;
    for(auto i:div){
        if(i<=k)ans = min(ans,n/i);
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
 