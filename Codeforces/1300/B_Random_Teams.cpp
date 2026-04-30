#include<bits/stdc++.h>
using namespace std;
#define ll long long int
 
ll minfriends(ll x,ll y)
{
    ll a,b,c,sum1,sum2;
    a = x/y;
    b = y-(x%y);
    c = y-b;
    sum1 = ((a-1)*a)/2;
    sum1 *= b;
    sum2 = (a*(a+1))/2;
    sum2 *= c;
    return sum1+sum2;
}
 
ll maxfriends(ll x,ll y)
{
    ll p = x-y+1;
    ll m = ((p-1)*p)/2;
    return m;
}
 
int main()
{
    ll x,y;
    cin>>x>>y;
    ll ans1 = minfriends(x,y);
    ll ans2 = maxfriends(x,y);
    cout<<ans1<<" "<<ans2<<endl;
    return 0;
}