#include<bits/stdc++.h>
using namespace std;
#define ll long long int
 
bool solve()
{
    ll n,a[200200];
    cin>>n;
    for (int i=0; i<n; i++)cin>>a[i];
    sort(a,a+n);
    if (n==1 && a[0]>1)return false;
    else if (n==1 && a[0]<=1) return true;
    if ((a[n-1]-a[n-2])>=2)return false;
    return true;
 
}
 
int main()
{
    int tc;
    cin>>tc;
    while(tc--)
    {
        cout<<(solve()?"YES":"NO")<<endl;
    }
    return 0;
}
 