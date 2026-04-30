#include<bits/stdc++.h>
using namespace std;
#define ll long long int
void solve()
{
    ll n,a[50050];
    cin>>n;
    for (int i=0; i<n; i++)cin>>a[i];
    if (a[0]+a[1]<=a[n-1])cout<<"1 2 "<<n<<endl;
    else cout<<"-1"<<endl;
    return;
}
 
int main()
{
    int tc;
    cin>>tc;
    while (tc--)
    {
        solve();
    }
    return 0;
}