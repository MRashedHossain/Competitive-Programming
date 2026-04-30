#include<bits/stdc++.h>
using namespace std;
#define ll long long int
 
void solve()
{
    int n,a[100],sum=0;
    cin>>n;
    for (int i=0;i<n;i++)cin>>a[i];
    sort(a,a+n);
    for (int i=0,j=(n-1);i<(n/2);i++,j--)
    {
        sum+=abs(a[i]-a[j]);
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
 
 