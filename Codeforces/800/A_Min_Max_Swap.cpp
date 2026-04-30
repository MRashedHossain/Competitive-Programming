#include<bits/stdc++.h>
using namespace std;
int main()
{
    int tc;
    cin>>tc;
    while (tc--)
    {
        long long n,mx=0,mx2,mx1,index=0,ans=0;
        cin>>n;
        long long a[n+2],b[n+2];
        for (int i=1; i<=n; i++)cin>>a[i];
        for (int i=1; i<=n; i++){cin>>b[i];if (a[i]>b[i])swap(a[i],b[i]);}
        mx1=*max_element(a+1,a+n+1);
        mx2=*max_element(b+1,b+n+1);
        ans=mx1*mx2;
        cout<<ans<<endl;
    }
}