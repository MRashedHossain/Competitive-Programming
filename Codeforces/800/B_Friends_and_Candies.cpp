#include<bits/stdc++.h>
using namespace std;
int main()
{
    int tc;
    cin>>tc;
    while (tc--)
    {
        int n;
        cin>>n;
        int a[n+8],zero=0,ans=0,sum=0;
        for (int i=0; i<n; i++)
        {
            cin>>a[i];
            if (a[i]==0)zero++;
            sum+=a[i];
        }
        if (sum%n!=0)cout<<"-1"<<endl;
        else
        {
            int x=sum/n;
            for (int i=0; i<n; i++)
            {
                if (a[i]-x>0)ans++;
            }
            cout<<ans<<endl;
        }
    }
}