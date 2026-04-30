#include<bits/stdc++.h>
using namespace std;
#define ll long long int
void solve()
{
    ll n,a[100100],mn,mx;
    cin>>n;
    for (int i=0; i<n; i++)cin>>a[i];
    cout<<abs(a[0]-a[1])<<" "<<abs(a[0]-a[n-1])<<endl;
    for (int i=1; i<n-1; i++)
    {
        mn = min(abs(a[i]-a[i-1]),abs(a[i]-a[i+1]));
        mx = max(abs(a[i]-a[0]),abs(a[i]-a[n-1]));
        cout<<mn<<" "<<mx<<endl;
    }
    cout<<abs(a[n-1]-a[n-2])<<" "<<abs(a[0]-a[n-1]);
}
 
int main()
{
    solve();
    return 0;
}