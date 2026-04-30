#include<bits/stdc++.h>
using namespace std;
int main()
{
    int a,b,ans=0,p,x;
    cin>>a>>b;
    p=a;
    while (true)
    {
        x=a%b;
        a/=b;
        ans+=a;
        if (a==0)break;
        a+=x;
    }
    ans+=p;
    cout<<ans;
}