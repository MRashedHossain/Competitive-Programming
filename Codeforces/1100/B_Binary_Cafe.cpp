#include<bits/stdc++.h>
using namespace std;
#define ll long long int
 
void solve()
{
    ll n,k,x,y;
    cin>>n>>k;
    if(k>32)x = 9999999999;
    else x = pow(2,k);
    y = n+1;
    cout<<min(x,y)<<endl;
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
 