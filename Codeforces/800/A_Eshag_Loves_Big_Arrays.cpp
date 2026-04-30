#include<bits/stdc++.h>
using namespace std;
int main()
{
    int tc;
    cin>>tc;
    while (tc--)
    {
        int n,a[100],sum=0,v,ans=0;
        cin>>n;
        for (int i=0; i<n; i++)
        {
            cin>>a[i];
            sum+=a[i];
        }
        sort(a,a+n);
        for (int i=0; i<n; i++)
        {
            if (a[i]==a[0])ans++;
        }
        cout<<n-ans<<endl;
    }
}