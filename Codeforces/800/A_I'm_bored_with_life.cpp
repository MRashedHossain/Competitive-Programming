#include<bits/stdc++.h>
using namespace std;
int main()
{
    int a,b,x,ans=1;
    cin>>a>>b;
    x=min(a,b);
    for (int i=2;i<=x;i++)ans=ans*i;
    cout<<ans<<endl;
}