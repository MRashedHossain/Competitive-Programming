#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,ans=0;
    cin>>n;
    string s[n];
    for (int i=0; i<n; i++)cin>>s[i];
    for (int i=0; i<n; i++)
    {
        if (s[i][0]=='O' && s[i][1]=='O')
        {
            ans=1;
            s[i][0]='+';
            s[i][1]='+';
            break;
        }
        else if (s[i][3]=='O' && s[i][4]=='O')
        {
            ans=1;
            s[i][3]='+';
            s[i][4]='+';
            break;
        }
    }
    if (ans==0)cout<<"NO"<<endl;
    else
    {
        cout<<"YES"<<endl;
        for (int i=0; i<n; i++)cout<<s[i]<<endl;
    }
 
}