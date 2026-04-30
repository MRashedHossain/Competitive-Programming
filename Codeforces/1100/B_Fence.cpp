#include<bits/stdc++.h>
using namespace std;
int main()
{
    long long n,k,sum=0,x=0,mn=10000000000,ans=0;
    cin>>n>>k;
    int a[n+8],b[n+8];
    b[0]={0};
    for (int i=0;i<n;i++)
    {
        cin>>a[i];
        sum+=a[i];
        b[i+1]=sum;
    }
    for (int i=k;i<=n;i++,x++)
    {
        if (b[i]-b[x]<mn){mn=b[i]-b[x];ans=x+1;}
 
    }
    cout<<ans<<endl;
 
}