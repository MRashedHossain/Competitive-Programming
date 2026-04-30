#include<bits/stdc++.h>
using namespace std;
 
#define endl "\n"
#define RASHED ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
///#define int long long int
 
void solve() {
 
}
int32_t main() {
    RASHED
    int n,_m;cin>>n>>_m;
    map<string,string> m;
    while(_m--){
        string s,t;cin>>s>>t;
        m[s] = t;m[t] = s;
    }
    while(n--){
        string s;cin>>s;
        if(s.size() > m[s].size())cout<<m[s]<<" ";
        else cout<<s<<" ";
    }
    cout<<endl;
    return 0;
}
 