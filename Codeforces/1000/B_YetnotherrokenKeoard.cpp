#include<bits/stdc++.h>
using namespace std;
 
#define endl "\n"
#define RASHED ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
///#define int long long int
 
void solve() {
    string s;cin>>s;
    reverse(s.begin(),s.end());
    int n = s.size(),b = 0,B = 0;
    vector<char> v;
    for(int i=0; i<n; i++) {
        if(s[i] == 'B')B++;
        else if(s[i] == 'b')b++;
        else if(s[i]>='a' && s[i]<='z' && b == 0)v.push_back(s[i]);
        else if(s[i]>='a' && s[i]<='z' && b > 0)b--;
        else if(s[i]>='A' && s[i]<='Z' && B == 0)v.push_back(s[i]);
        else if(s[i]>='A' && s[i]<='Z' && B > 0)B--;
    }
    reverse(v.begin(),v.end());
    for(int i=0; i<v.size(); i++)cout<<v[i];
    cout<<endl;
}
signed main() {
    RASHED
    int tc;
    cin>>tc;
    while(tc--)solve();
    return 0;
}
 