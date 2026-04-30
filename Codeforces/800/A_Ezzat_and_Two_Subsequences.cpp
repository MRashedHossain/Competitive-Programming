#include<bits/stdc++.h>
using namespace std;
#define ll long long int
#define lld long long double
 
void solve()
{
    ll n;
    double ans,a,sum=0,mx=-9999999999;
    scanf("%lld",&n);
    for (int i=0; i<n; i++)
    {
        scanf("%lf",&a);
        sum+=a;
        if (a>mx)mx=a;
    }
    ///mx = *max_element(a,a+n);
    ///double ans;
    ans = (sum-mx)/(n-1);
    ans+=mx;
    ///cout<<ans<<endl;
    printf("%.10lf\n",ans);
    return;
}
 
int main()
{
    ll tc;
    scanf("%lld",&tc);
    while (tc--)
    {
        solve();
    }
    return 0;
}