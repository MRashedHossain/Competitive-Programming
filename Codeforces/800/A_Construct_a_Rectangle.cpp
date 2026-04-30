#include<bits/stdc++.h>
using namespace std;
#define ll long long int
 
bool solve()
{
    ll a,b,c;
    cin>>a>>b>>c;
    if (a+b==c || b+c==a || a+c==b)return true;
    if ((a==b && c%2==0) || (a==c && b%2==0) || (b==c && a%2==0))return true;
    return false;
}
 
int main()
{
    int tc;
    cin>>tc;
    while(tc--)
    {
        cout<<(solve()?"YES":"NO")<<endl;
    }
}