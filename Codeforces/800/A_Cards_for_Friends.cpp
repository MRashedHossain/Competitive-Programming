#include<bits/stdc++.h>
using namespace std;
int main()
{
    int tc;
    cin>>tc;
    while (tc--)
    {
        long long n,m,k,ans=1;
        cin>>n>>m>>k;
        while ((n%2==0 || m%2==0) && ans<k)
        {
            if (n%2)m/=2;
            else n/=2;
            ans*=2;
        }
        cout<<(ans>=k?"YES" : "NO")<<endl;
    }
}