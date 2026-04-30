#include<bits/stdc++.h>
 
using namespace std;
 
int main()
{
    int x,y,ans,b,p,q,r;
    int a[2];
    cin>>r;
    for (int i=1; i<=r; i++)
    {
        cin>>a[0]>>a[1];
 
        if (a[0]>a[1])
        {
            x=a[0];
            y=a[1];
        }
        else if (a[1]>a[0])
        {
            x=a[1];
            y=a[0];
        }
        else
        {
            cout<<"0"<<endl;
            continue;
        }
        b=(x-y);
        if ((b%10)!=0)
        {
            p=b%10;
            q=((b-p)/10);
            ans=q+1;
        }
        else
        {
            ans=(b/10);
        }
        cout<<ans<<endl;
    }
}
 