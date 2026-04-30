#include<bits/stdc++.h>
using namespace std;
int main()
{
    int tc;
    cin>>tc;
    while(tc--)
    {
        string t="Timur",s;
        int n,ans=0;
        cin>>n>>s;
        for (int j=0; j<t.size(); j++)
        {
            for (int i=0; i<n; i++)
            {
                if (t[j]==s[i])
                {
                    ans++;
                    break;
                }
            }
        }
        if (ans==5 && n==5)cout<<"YES"<<endl;
        else cout<<"NO"<<endl;
    }
}