#include<bits/stdc++.h>
using namespace std;
 
void solve()
{
    int n,k,ans;
    cin>>n>>k;
    int p=n-1;
    if (p%k==0)ans=p/k;
    else ans=(p/k)+1;
    cout<<ans+1<<endl;
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