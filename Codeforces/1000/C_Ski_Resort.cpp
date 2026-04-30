#include<bits/stdc++.h>
using namespace std;
#define ll long long int
 
void solve()
{
    ll n,k,q,a[200200],flag=0;
    vector<ll> v;
    cin>>n>>k>>q;
    for(int i=0; i<n; i++)
    {
        cin>>a[i];
        if (a[i]<=q)flag++;
        else
        {
            v.push_back(flag);
            flag=0;
        }
        if(i==n-1)v.push_back(flag);
    }
    sort(v.begin(),v.end());
    ///for(int i=0; i<v.size(); i++)cout<<v[i]<<" ";
    ///cout<<endl;
    ll sum=0;
    for(int i=0; i<v.size(); i++)
    {
        if(v[i]<k)sum+=0;
        else if(v[i]==k)sum+=1;
        else
        {
            ll p=(v[i]-k)+1;
            ll q= (p*(p+1));
            q/=2;
            sum+=q;
        }
    }
    cout<<sum<<endl;
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
 