#include<bits/stdc++.h>
using namespace std;
 
int main()
{
    int tc;
    cin>>tc;
    while (tc--)
    {
        int n,t,mnb=0,ans=-1;
        cin>>n>>t;
        int a[n+3],b[n+3];
        for (int i=1; i<=n; i++)cin>>a[i];
        for (int i=1; i<=n; i++)cin>>b[i];
        for (int i=1; i<=n; i++)
        {
            if (a[i]<=t)
            {
                if (b[i]>mnb){ans=i;mnb=b[i];}
            }
            t--;
        }
        cout<<ans<<endl;
    }
}