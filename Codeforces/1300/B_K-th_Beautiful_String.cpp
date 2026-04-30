#include<bits/stdc++.h>
using namespace std;
#define ll long long int
ll n,m,pos1=0,pos2=0,sum=0;
char c[100100];
 
void solve()
{
    cin>>n>>m;
    for (ll i=1; i<=n; i++)c[i]='a';
    for (ll i=1; i<=n; i++)
    {
        sum = (i*(i+1))/2;
        if (sum>=m)
        {
            pos1 = n-i;
            sum = (i*(i-1))/2;
            sum = m-sum;
            pos2 = n-sum+1;
            break;
        }
 
    }
    c[pos1] = 'b';
    c[pos2] = 'b';
}
 
int main()
{
    int tc;
    cin>>tc;
    while(tc--)
    {
        solve();
        for (ll i=1; i<=n; i++)cout<<c[i];
        cout<<endl;
    }
    return 0;
}
 
 
 