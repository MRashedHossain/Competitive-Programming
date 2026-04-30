#include<bits/stdc++.h>
using namespace std;
#define ll long long int
 
void solve()
{
    map<ll,ll> m;
    ll n,a[200200];
    cin>>n;
    for (int i=0; i<n; i++)cin>>a[i];
    for (int i=n-1; i>=0; i--)
    {
        m[a[i]]++;
        if (m[a[i]]>1)break;
    }
    cout<<n-m.size()<<endl;
 
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
 
 