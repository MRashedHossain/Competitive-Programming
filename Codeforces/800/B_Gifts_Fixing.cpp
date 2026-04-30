#include<bits/stdc++.h>
using namespace std;
int main()
{
    int tc;
    cin>>tc;
    while(tc--)
    {
        long long n,a[60],b[60],mna=0,mnb=0,ans=0,x,y;
        cin>>n;
        for (int i=0;i<n;i++)cin>>a[i];
        for (int i=0;i<n;i++)cin>>b[i];
        mna=*min_element(a,a+n);
        mnb=*min_element(b,b+n);
        for (int i=0;i<n;i++)
        {
            x=a[i]-mna;
            y=b[i]-mnb;
            ans+=max(x,y);
        }
        cout<<ans<<endl;
    }
}