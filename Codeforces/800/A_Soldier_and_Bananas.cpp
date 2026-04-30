#include<bits/stdc++.h>
 
using namespace std;
 
int main()
{
    int a,b,i,k,x,sum=0,ans;
    cin>>a>>b>>k;
    for (i=1; i<=k; i++)
    {
        x=i*a;
        sum=sum+x;
    }
    ans=sum-b;
    if (ans>0)cout<<ans;
    else cout<<"0";
}