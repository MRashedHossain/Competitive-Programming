#include<bits/stdc++.h>
using namespace std;
 
#define endl "\n"
#define RASHED ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
///#define int long long int
 
void solve() {
 
}
signed main() {
    RASHED
    string s,t = "Bulbasr";
    map<char,int> m;
    cin>>s;
    int n = s.size();
    for(int i=0;i<n;i++){
        m[s[i]]++;
    }
    m['u']/=2;
    m['a']/=2;
    int ans = INT_MAX;
    for(int i=0;i<t.size();i++)ans = min(ans,m[t[i]]);
    cout<<ans<<endl;
    return 0;
}
 