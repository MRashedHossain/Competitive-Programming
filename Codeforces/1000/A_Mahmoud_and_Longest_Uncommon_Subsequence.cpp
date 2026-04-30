#include<bits/stdc++.h>
using namespace std;
 
#define endl "\n"
#define RASHED ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
///#define int long long int
 
int solve() {
    string s,t;cin>>s>>t;
    if(s == t)return -1;
    return max(s.size(),t.size());
}
int32_t main() {
    RASHED
    cout<<solve()<<endl;
    return 0;
}
 