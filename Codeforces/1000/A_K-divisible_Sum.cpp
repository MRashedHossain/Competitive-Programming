#include<bits/stdc++.h>
using namespace std;
#define ll long long int
 
ll solve()
{
    ll n,k,ans;
    cin>>n>>k;
    if (k>=n)
    {
        if (k%n)ans = (k/n)+1;
        else ans = (k/n);
    }
    else
    {
        if (n%k)ans = 2;
        else ans = 1;
    }
    return ans;
}
 
int main()
{
    int tc;
    cin>>tc;
    while (tc--)
    {
        cout<<solve()<<endl;
    }
}