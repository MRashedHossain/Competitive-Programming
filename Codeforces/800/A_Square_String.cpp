#include<bits/stdc++.h>
using namespace std;
int main()
{
    int tc,ans,p,q;
    string s;
    cin>>tc;
    while (tc--)
    {
        ans=0;
        cin>>s;
        p=s.size();
        if (p%2!=0)cout<<"NO"<<endl;
        else
        {
            q=s.size()/2;
            for (int i=0; i<q; i++)
            {
                if (s[i]==s[i+q])ans++;
            }
            if (ans==q)cout<<"YES"<<endl;
            else cout<<"NO"<<endl;
        }
    }
}
 