#include<bits/stdc++.h>
using namespace std;
int main()
{
    int tc;
    cin>>tc;
    string t = "codeforces";
    while (tc--)
    {
        string s;
        cin>>s;
        int ans=0;
        for (int i=0;i<t.size();i++)
        {
           if (t[i]!=s[i])ans++;
        }
        cout<<ans<<endl;
    }
 
}
 