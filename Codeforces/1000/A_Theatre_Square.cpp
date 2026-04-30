#include<bits/stdc++.h>
using namespace std;
int main()
{
    long long n,m,a,ans,x,y;
    cin>>n>>m>>a;
    if (n%a>0)
    {
        x=n/a;
        x++;
    }
    else x=n/a;
    if (m%a>0)
    {
        y=m/a;
        y++;
    }
    else y=m/a;
    ans=x*y;
    cout<<ans<<endl;
}