#include<bits/stdc++.h>
using namespace std;
#define ll long long int
 
void solve()
{
    ll n,g,s,p,ans;
    cin>>n>>g>>s;
    ll p1=((s-1)/2)*n;
    ll p2=g*s;
    ///cout<<p1<<" "<<p2<<endl;
    ans = min(p1,p2);
    if (ans%s)ans-=(ans%s);
    cout<<ans<<endl;
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
 
 