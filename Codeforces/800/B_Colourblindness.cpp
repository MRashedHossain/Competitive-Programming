#include<bits/stdc++.h>
using namespace std;
int main()
{
    int tc;
    cin>>tc;
    vector<string> u;
    while (tc--)
    {
        int n,ans=0;
        string s,t;
        cin>>n;
        cin>>s>>t;
        for (int i=0; i<s.size(); i++)
        {
            if ( s[i]==t[i] || (s[i]=='G' && t[i]=='B') || (t[i]=='G' && s[i]=='B') )ans++;
        }
        if (ans==n)u.push_back("YES");
        else u.push_back("NO");
    }
    for (int j=0;j<u.size();j++)cout<<u[j]<<endl;
}