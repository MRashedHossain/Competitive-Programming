#include<bits/stdc++.h>
using namespace std;
#define ll long long int
 
int solve()
{
    set<ll> s;
    ll n;
    cin>>n;
    for (int i=1; i*i<=n; i++)s.insert(i*i);
    for (int i=1; i*i*i<=n; i++)s.insert(i*i*i);
    return s.size();
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