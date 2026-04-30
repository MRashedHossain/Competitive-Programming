#include<bits/stdc++.h>
using namespace std;
#define ll long long int
 
ll solve()
{
    ll a,b,c;
    cin>>a>>b>>c;
    return ((a+b+c)/2);
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
 
 