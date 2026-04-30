#include<bits/stdc++.h>
using namespace std;
void solve()
{
    int n,a,b=0,ans=0;
    cin>>n;
    while (n--)
    {
        cin>>a;
        if (a!=b)ans++;
        b=a;
    }
    cout<<ans<<endl;
}
int main()
{
    solve();
}
 