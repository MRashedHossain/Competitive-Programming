#include<bits/stdc++.h>
 
using namespace std;
 
int main()
{
    int a,b,c=0,x,ans=0;
    cin>>a>>b;
    b=240-b;
    for (int i=1; i<=a; i++)
    {
        x=5*i;
        c=c+x;
        if ((b-c)>=0)ans++;
        else break;
    }
    cout<<ans;
}
 