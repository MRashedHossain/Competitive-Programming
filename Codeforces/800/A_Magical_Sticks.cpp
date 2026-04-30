#include<bits/stdc++.h>
using namespace std;
 
int solve()
{
    long long n,x;
    cin>>n;
    if(n%2)
    {
        x=(n+1)/2;
        return x;
    }
    else
    {
        x=n/2;
        return x;
    }
}
 
int main()
{
    int tc;
    cin>>tc;
    while (tc--)
    {
        int ans = solve();
        cout<<ans<<endl;
    }
}