#include<bits/stdc++.h>
using namespace std;
long long n,a[100005],ans;
int main()
{
    int tc;
    cin>>tc;
    while (tc--)
    {
        cin>>n;
        ans=0;
        for (int i=1; i<=n; i++)
        {
            cin>>a[i];
            ans=max(a[i]*a[i-1],ans);
        }
        cout<<ans<<endl;
    }
}