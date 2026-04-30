#include<bits/stdc++.h>
using namespace std;
void solve()
{
    map<int,int> m;
    int n,ans=-1,x;
    cin>>n;
    for (int i=0; i<n; i++)
    {
        cin>>x;
        m[x]++;
        if (m[x]>=3)ans=x;
    }
    cout<<ans<<endl;
}
int main()
{
    int tc;
    cin>>tc;
    while (tc--)
    {
        solve();
    }
}