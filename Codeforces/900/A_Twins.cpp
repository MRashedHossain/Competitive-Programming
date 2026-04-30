#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,ans=0,a[105],sum=0,x,sum1=0;
    cin>>n;
    for (int i=0; i<n; i++)
    {
        cin>>a[i];
        sum+=a[i];
    }
    sort(a,a+n);
    x=sum/2;
    int p=n-1;
    while (true )
    {
        sum1+=a[p];
        ans++;
        if (sum1>x)break;
        else p--;
    }
    cout<<ans<<endl;
}