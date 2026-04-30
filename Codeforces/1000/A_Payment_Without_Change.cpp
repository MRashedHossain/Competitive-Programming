#include<bits/stdc++.h>
using namespace std;
#define ll long long int
 
bool solve()
{
    ll a,b,n,s;
    cin>>a>>b>>n>>s;
    if(b<(s%n))return false;
    ///1 2 3 6
    if ((a*n)+b>=s)return true;
    return false;
}
 
int main()
{
    int tc;
    cin>>tc;
    while (tc--)
    {
        cout<<(solve()?"YES":"NO")<<endl;
    }
    return 0;
}