#include<bits/stdc++.h>
using namespace std;
 
#define endl "\n"
#define RASHED ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
///#define int long long int
 
void solve() {
    int n,a,b;cin>>n>>a>>b;
    string s = "";
    for(int i = 'a';i<'a'+b;i++)s+=i;
    for(int i=0;i<(n/b);i++)cout<<s;
    for(int i=0;i<(n%b);i++)cout<<s[i];
    cout<<endl;
}
signed main() {
    RASHED
    int tc;
    cin>>tc;
    while(tc--)solve();
    return 0;
}
 