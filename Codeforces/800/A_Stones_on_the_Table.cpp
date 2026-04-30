#include<bits/stdc++.h>
 
using namespace std;
 
int main()
{
    int a,l,ans=0;
    string s;
    cin>>a;
    cin>>s;
 
    for (int i=0; i<a; i++)
    {
        if (s[i]==s[i+1])ans++;
        }
    cout<<ans;
    return 0;
}