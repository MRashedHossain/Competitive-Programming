#include<bits/stdc++.h>
using namespace std;
int main()
{
    string t="abcdefghijklmnopqrstuvwxyz";
    int tc;
    cin>>tc;
    while (tc--)
    {
        int n,flag=0,mx=0;
        string s;
        cin>>n>>s;
        for (int j=0; j<n; j++)
        {
            for (int i=0; i<26; i++)
            {
                if (s[j]==t[i])
                {
                    flag=i+1;
                    if (flag>mx)mx=flag;
                }
            }
        }
        cout<<mx<<endl;
    }
}