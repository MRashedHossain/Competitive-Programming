#include<bits/stdc++.h>
using namespace std;
void solve()
{
    long long a,b,c,d,x,y,z;
    cin>>a>>b>>c>>d;
    x=max(a,b);
    y=min(c,d);
    z=min(c,d);
    cout<<x<<" "<<y<<" "<<z<<endl;
}
int main()
{
    int tc;
    cin>>tc;
    while(tc--)
    {
        solve();
    }
}