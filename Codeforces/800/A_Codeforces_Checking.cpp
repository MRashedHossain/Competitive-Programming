#include<bits/stdc++.h>
using namespace std;
int main()
{
    string s="codefrcs";
    int tc,ans;
    cin>>tc;
    while(tc--)
    {
        char c;
        cin>>c;
        ans=0;
        for (int i=0; i<s.size(); i++)
        {
            if (c==s[i])ans++;
        }
        if (ans>0)cout<<"YES"<<endl;
        else cout<<"NO"<<endl;
    }
}