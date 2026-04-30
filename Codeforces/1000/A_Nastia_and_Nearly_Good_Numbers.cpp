#include<bits/stdc++.h>
#define ll long long int
using namespace std;
void solve()
{
    ll a,b,x,y,z;
    cin>>a>>b;
    if (b==1)cout<<"NO"<<endl;
    else
    {
        x=a;
        y=a*b;
        z=x+y;
        cout<<"YES"<<endl;
        cout<<a<<" "<<a*b<<" "<<(a*b)+a<<endl;
    }
}
int main()
{
    ll tc;
    cin>>tc;
    while (tc--)
    {
        solve();
    }
    return 0;
}