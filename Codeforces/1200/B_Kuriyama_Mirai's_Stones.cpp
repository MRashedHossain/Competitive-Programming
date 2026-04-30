#include<bits/stdc++.h>
using namespace std;
#define ll long long int
 
void solve()
{
    ll num,n[100100],v[100100]= {0},u[100100]= {0},q,ans;
    cin>>num;
    for (int i=0; i<num; i++)
    {
        cin>>n[i];
        v[i+1]=v[i]+n[i];
    }
    sort(n,n+num);
    for (int i=0; i<num; i++)
    {
        u[i+1]=u[i]+n[i];
    }
    cin>>q;
    while (q--)
    {
        ll t,l,r;
        cin>>t>>l>>r;
        if (t==1)
        {
            ans = v[r]-v[l-1];
        }
        else
        {
            ans = u[r]-u[l-1];
        }
        cout<<ans<<endl;
    }
}
 
int main()
{
    solve();
    return 0;
}