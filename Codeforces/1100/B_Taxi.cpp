#include<bits/stdc++.h>
using namespace std;
void solve()
{
    int n,c1=0,c2=0,c3=0,c4=0,x,ans=0;
    cin>>n;
    for (int i=0; i<n; i++)
    {
        cin>>x;
        if (x==1)c1++;
        if (x==2)c2++;
        if (x==3)c3++;
        if (x==4)c4++;
    }
    ans+=c4;
    if (c3>=c1)c1=0;
    else c1-=c3;
    ans+=c3;
    ans+=(c2/2);
    c2%=2;
    ans+=(c1/4);
    c1%=4;
    if (c1!=0 || c2!=0)
    {
        if ((c1+(2*c2))>4)ans+=2;
        else ans++;
    }
    cout<<ans<<endl;
}
int main()
{
    solve();
}