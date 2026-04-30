#include<bits/stdc++.h>
using namespace std;
int main()
{
    int tc;
    cin>>tc;
    while (tc--)
    {
        long long a,b,c,mod,ans;
        cin>>a>>b>>c;
        c-=b;
        mod=c/a;
        ans=(mod*a)+b;
        cout<<ans<<endl;
    }
}