#include<bits/stdc++.h>
using namespace std;
#define ll long long int
 
void solve()
{
    ll n,ans=0,a=0,b=0,c=0;
    cin>>n;
    if (n<2)cout<<"0"<<endl;
    else
    {
        a=n--;
        a/=2;
        b=8;
        for(ll i=1; i<=a; i++)
        {
            c=b*i;
            ans+=(c*i);
        }
        cout<<ans<<endl;
    }
}
 
int main()
{
    int tc;
    cin>>tc;
    while(tc--)
    {
        solve();
    }
    return 0;
}