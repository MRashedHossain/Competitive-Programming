#include<bits/stdc++.h>
using namespace std;
int n,ans,sum;
 
void clean()
{
    n=0;
    sum=0;
    ans=0;
}
void solve()
{
    cin>>n;
    for (int i=1; i<=n; i++)
    {
        int x=((n-i)*i);
        sum+=x;
    }
    ans = sum+n;
    ///cout<<ans<<" "<<sum<<endl;
}
 
int main()
{
    clean();
    solve();
    cout<<ans<<endl;
}