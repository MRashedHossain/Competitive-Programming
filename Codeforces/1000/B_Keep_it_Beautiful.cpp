#include<bits/stdc++.h>
using namespace std;
#define ll long long int
 
void solve()
{
    ll n,ans=0,flg,flgg;
    vector<ll> v;
    cin>>n;
    ll a[n+8];
    for (int i=0; i<n; i++)cin>>a[i];
    v.push_back(1);
    flg=a[0];
    flgg=0;
    for (int i=1; i<n; i++)
    {
        if(ans==0)
        {
            if(a[i]>=flg)
            {
                v.push_back(1);
                flg=a[i];
            }
            else
            {
                if(a[i]<=a[0])
                {
                    v.push_back(1);
                    flgg=a[i];
                    flg=a[0];
                    ans++;
                }
                else v.push_back(0);
            }
        }
        else
        {
            if(a[i]>=flgg && a[i]<=flg)
            {
                v.push_back(1);
                flgg=a[i];
            }
            else v.push_back(0);
        }
    }
    for(int i=0; i<n; i++)cout<<v[i];
    cout<<endl;
    return;
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
 