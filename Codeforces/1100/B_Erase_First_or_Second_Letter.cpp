#include<bits/stdc++.h>
using namespace std;
 
#define endl "\n"
#define RASHED ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
///#define int long long int
 
void solve() {
    int n,ans = 0;string s;
    cin>>n>>s;
    set<char> ss;
    vector<int> v;
    for(auto i:s){
        ss.insert(i);
        v.push_back(ss.size());
    }
    for(auto i:v)ans+=i;
    cout<<ans<<endl;
}
signed main() {
    RASHED
    int tc;
    cin>>tc;
    while(tc--)solve();
    return 0;
}
/**
1
5
ababa
*/