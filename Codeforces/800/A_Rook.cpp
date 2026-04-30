#include<bits/stdc++.h>
using namespace std;
 
#define endl "\n"
#define RASHED ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
///#define int long long int
 
void solve() {
    string s;cin>>s;
    for(int i=1;i<=8;i++){
        if(i == s[1]-'0')continue;
        cout<<s[0]<<i<<endl;
    }
    for(int i='a';i<='h';i++){
        if(i == s[0])continue;
        cout<<(char)i<<s[1]<<endl;
    }
    cout<<endl;
}
signed main() {
    RASHED
    int tc;
    cin>>tc;
    while(tc--)solve();
    return 0;
}
 