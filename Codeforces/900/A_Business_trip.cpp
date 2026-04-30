#include<bits/stdc++.h>
using namespace std;
void solve(int n)
{
    int a[12],sum=0,ans=0;
    for (int i=0; i<12; i++)cin>>a[i];
    sort(a,a+12,greater<int>());
    for (int i=0; i<12; i++)
    {
        if (sum>=n)break;
        else
        {
            sum+=a[i];
            ans++;
        }
    }
    if (sum<n)cout<<"-1"<<endl;
    else cout<<ans<<endl;
}
int main()
{
    int n;
    cin>>n;
    solve (n);
}
 