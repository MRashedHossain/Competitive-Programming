#include<bits/stdc++.h>
using namespace std;
int main()
{
    int tc;
    cin>>tc;
    while (tc--)
    {
        int a,b,c,mx,mn,v;
        cin>>a>>b>>c;
        if (a>b)
        {
            mx=a;
            mn=b;
        }
        else
        {
            mx=b;
            mn=a;
        }
        v=(mx-mn);
        if (c>v*2 || v==1 || mx>v*2 )cout<<"-1"<<endl;
        else
        {
            if (c+v>v*2)cout<<c-v<<endl;
            else cout<<c+v<<endl;
        }
    }
}