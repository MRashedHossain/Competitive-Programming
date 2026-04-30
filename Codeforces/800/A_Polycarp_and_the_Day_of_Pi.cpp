#include<bits/stdc++.h>
using namespace std;
string t="314159265358979323846264338327";
int main()
{
    int tc;
    cin>>tc;
    while (tc--)
    {
        string s;
        cin>>s;
        int ans=0;
        for (int i=0; i<s.size(); i++)
        {
            if (s[i]==t[i])ans++;
            else break;
        }
        cout<<ans<<endl;
    }
}