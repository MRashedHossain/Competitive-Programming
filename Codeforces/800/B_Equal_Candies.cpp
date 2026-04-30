#include<bits/stdc++.h>
using namespace std;
int main()
{
    int tc;
    cin>>tc;
    while (tc--)
    {
        int n,sum=0,ans;
        cin>>n;
        int a[n];
        for (int l=0;l<n;l++)cin>>a[l];
        if (n<2)cout<<"0"<<endl;
        else
        {
            sort(a,a+n);
            sum=accumulate(a,a+n,sum);
            ans=sum-(a[0]*n);
            cout<<ans<<endl;
        }
    }
}