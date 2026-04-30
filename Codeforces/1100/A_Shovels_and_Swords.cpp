#include<bits/stdc++.h>
using namespace std;
#define ll long long int
ll a,b,ans;
 
ll solve()
{
    cin>>a>>b;
    ans = (a+b)/3;
    if (ans>min(a,b))ans = min(a,b);
    return ans;
}
 
int main()
{
    int tc;
    cin>>tc;
    while(tc--)
    {
        cout<<solve()<<endl;
    }
    return 0;
}
 
 