#include<bits/stdc++.h>
using namespace std;
#define ll long long int
 
ll solve()
{
    ll n,m,x,r,c,ans;
    cin>>n>>m>>x;
    if (x%n)
    {
        c = (x/n)+1;
        r = x%n;
        ans = c+((r-1)*m);
    }
    else
    {
        c = x/n;
        r = n;
        ans = c+((r-1)*m);
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
    return 0;
}