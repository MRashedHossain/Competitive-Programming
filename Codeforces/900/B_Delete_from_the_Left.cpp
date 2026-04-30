#include<bits/stdc++.h>
using namespace std;
 
void solve()
{
    string s,t;cin>>s>>t;
    reverse(s.begin(),s.end());
    reverse(t.begin(),t.end());
    int ans = 0;
    for(int i=0;i<min(s.size(),t.size());i++){
        if(s[i] == t[i]) ans++;
        else break;
    }
    cout<<(s.size()+t.size()) - (ans*2)<<endl;
}
 
int main()
{
    int tc=1;
    //cin>>tc;
    while(tc--)solve();
}
 