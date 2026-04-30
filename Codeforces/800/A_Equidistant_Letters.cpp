#include<bits/stdc++.h>
using namespace std;
 
void solve()
{
    string s;
    multiset<char> ss;
    cin>>s;
    for (int i=0;i<s.size();i++)ss.insert(s[i]);
    for (auto it:ss)cout<<it;
    cout<<endl;
}
 
int main()
{
    int tc;
    cin>>tc;
    while(tc--)
    {
        solve();
    }
}
 