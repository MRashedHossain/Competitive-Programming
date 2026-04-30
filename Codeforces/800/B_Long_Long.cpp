#include<bits/stdc++.h>
using namespace std;
#define ll long long int
 
void solve()
{
    ll n,a[200100],b[200100]= {0},ans1=0,ans2=0;
    vector<ll> v;
    cin>>n;
    for (int i=0; i<n; i++)
    {
        cin>>a[i];
        ///b[i+1]=b[i]+abs(a[i]);
        if (a[i]<0)ans2++;
        ///if(a[i]==0)continue;
        if (a[i]>0)
        {
            if (ans2>0)v.push_back(ans2);
            ans2=0;
        }
        ans1+=abs(a[i]);
    }
    if (ans2>0)v.push_back(ans2);
    ///for (auto i:v)cout<<i<<" ";
    ///cout<<endl;
    cout<<ans1<<" "<<v.size()<<endl;
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
 
 