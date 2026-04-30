#include<bits/stdc++.h>
using namespace std;
void solve()
{
    int a,b,c,x,y,z;
    cin>>a>>b>>c;
    x=max(0,max(b,c)+1-a);
    y=max(0,max(a,c)+1-b);
    z=max(0,max(a,b)+1-c);
    cout<<x<<" "<<y<<" "<<z<<endl;
}
///cout<<a<<" "<<b<<" "<<c<<endl;
int main()
{
    int tc;
    cin>>tc;
    while (tc--)
    {
        solve();
    }
}