#include<bits/stdc++.h>
using namespace std;
int main()
{
    int tc;
    cin>>tc;
    while (tc--)
    {
        int a,b,ans;
        cin>>a>>b;
        ans=a*(b/2);
        if (b%2==0)cout<<ans<<endl;
        else
        {
            if (a%2==0)cout<<ans+(a/2)<<endl;
            else cout<<ans+(a/2)+1<<endl;
        }
    }
}