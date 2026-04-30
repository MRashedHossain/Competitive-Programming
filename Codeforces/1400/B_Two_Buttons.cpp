#include<bits/stdc++.h>
using namespace std;
int main()
{
    int a,b,ans=0;
    cin>>a>>b;
    if (b-a<=0)cout<<abs(b-a);
    else
    {
       while (b>a)
       {
           if (b%2)b++;
           else b/=2;
           ans++;
       }
       ans=ans+(a-b);
       cout<<ans;
    }
}