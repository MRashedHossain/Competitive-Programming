#include<bits/stdc++.h>
using namespace std;
int main()
{
    int tc;
    cin>>tc;
    while (tc--)
    {
        int a,b,c,d,e,f,ans=0,mx1,mx2,mn1,mn2;
        cin>>a>>b>>c>>d>>e>>f;
        if (a>c)
        {
            mx1=a;
            mn1=c;
        }
        else
        {
            mx1=c;
            mn1=a;
        }
        if (b>d)
        {
            mx2=b;
            mn2=d;
        }
        else
        {
            mx2=d;
            mn2=b;
        }
        //cout<<max(b,d)<<endl;
        //cout<<min(b,d)<<endl;
        if (((a==c&&c==e)||(b==d&&d==f)) && ((e>mn1 && e<mx1)||(f>mn2 && f<mx2)))
        {
            ans=(abs(a-c)+abs(b-d))+2;
            cout<<ans<<endl;
        }
        else
        {
            ans=(abs(a-c)+abs(b-d));
            cout<<ans<<endl;
        }
    }
}