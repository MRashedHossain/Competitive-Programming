#include<bits/stdc++.h>
using namespace std;
#define ll long long int
 
void solve()
{
    ll n,sum=0;
    cin>>n;
    while (n>0)
    {
        sum+=n;
        n/=2;
    }
    cout<<sum<<endl;
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
 
 