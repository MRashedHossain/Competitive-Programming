#include<bits/stdc++.h>
using namespace std;
 
void solve()
{
    int n,flag=0;
    string s;
    vector<char> v;
    cin>>n>>s;
    for (int i=1; i<n; i++)
    {
        if (s[i]==s[flag])
        {
            v.push_back(s[flag]);
            flag=i+1;
            i++;
        }
    }
    for(int i=0; i<v.size(); i++)cout<<v[i];
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
    return 0;
}
 