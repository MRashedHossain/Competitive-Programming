#include<bits/stdc++.h>
using namespace std;
int main()
{
    int tc;
    cin>>tc;
    while (tc--)
    {
        int n,f1=0,f2=0,ans=0;
        cin>>n;
        int a[n];
        for (int i=0;i<n;i++)cin>>a[i];
        for (int i=0; i<n; i++)
        {
            if (a[i]==1)
            {
                f1=i;
                break;
            }
        }
        for (int i=n-1; i>=0; i--)
        {
            if (a[i]==1)
            {
                f2=i;
                break;
            }
        }
        for(int i=f1; i<=f2; i++)
        {
            if (a[i]==0)ans++;
        }
        cout<<ans<<endl;
    }
}