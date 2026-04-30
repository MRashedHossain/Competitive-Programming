#include<bits/stdc++.h>
using namespace std;
#define ll long long int
 
ll solve()
{
    int n,a[111],sum=0,ans;
    cin>>n;
    for (int i=0; i<n; i++)
    {
        cin>>a[i];
        sum+=a[i];
    }
    ans = sum/n;
    if (ans*n<sum)ans++;
    return ans;
}
 
int main()
{
    int tc;
    cin>>tc;
    while (tc--)
    {
        cout<<solve()<<endl;
    }
    return 0;
}