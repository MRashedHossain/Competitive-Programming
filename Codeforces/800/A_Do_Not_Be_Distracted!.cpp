#include<bits/stdc++.h>
using namespace std;
int main()
{
    int tc;
    cin>>tc;
    while (tc--)
    {
        int n,ans=0;
        string s;
        map<char,int> mp;
        cin>>n>>s;
        for (int i=0; i<n; i++)
        {
            if (i==(n-1))
            {
                if (mp[s[i]]!=0)ans=1;
            }
            else
            {
                if (s[i]!=s[i+1])
                {
                    if (mp[s[i]]!=0)
                    {
                        ans=1;
                    }
                    else mp[s[i]]++;
                }
            }
 
        }
        if (ans==1)cout<<"NO"<<endl;
        else cout<<"YES"<<endl;
    }
}