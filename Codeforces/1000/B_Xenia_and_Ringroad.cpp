#include<bits/stdc++.h>
using namespace std;
int main()
{
    long long x=1,g,k,ans=0,a,p;
    cin>>g>>k;
    while (k--)
    {
        cin>>a;
        p=a-x;
        x=a;
        if (p<0)p=p+g;
        ans+=p;
    }
    cout<<ans;
}