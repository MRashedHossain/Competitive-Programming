#include<bits/stdc++.h>
using namespace std;
#define ll long long int
 
bool solve()
{
    ll n,a[100100];
    cin>>n;
    for(int i=0; i<n; i++)cin>>a[i];
    sort(a,a+n);
    for (int i=0; i<n-2; i++)
    {
        if (a[i]+a[i+1]>a[i+2])return true;
    }
    return false;
}
 
int main()
{
    cout<<(solve()?"YES":"NO")<<endl;
    return 0;
}