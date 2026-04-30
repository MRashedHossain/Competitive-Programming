#include<bits/stdc++.h>
 
using namespace std;
 
int main()
{
    int x,ans=0;
    string s;
    cin>>x>>s;
    for(int k=0; k<x; k++)
    {
        if (s[k]>='A' && s[k]<='Z')s[k]=s[k]+('a'-'A');
    }
 
    for (char i='a'; i<='z' ; i++)
    {
        for(int j=0; j<x; j++)
        {
            if (i==s[j])
            {
                ans++;
                break;
            }
        }
    }
    if (ans>=26)cout<<"YES";
    else cout<<"NO";
}
 