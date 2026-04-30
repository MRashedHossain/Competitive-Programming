#include<bits/stdc++.h>
using namespace std;
int main()
{
    int tc;
    cin>>tc;
    while (tc--)
    {
        int x=0,y=0,n,flag=0;
        string s;
        cin>>n>>s;
        for (int j=0; j<n; j++)
        {
            if (s[j]=='R')x++;
            else if(s[j]=='L')x--;
            else if (s[j]=='U')y++;
            else y--;
            if (x==1 && y==1)flag=1;
        }
        if (flag==1)cout<<"YES"<<endl;
        else cout<<"NO"<<endl;
    }
}