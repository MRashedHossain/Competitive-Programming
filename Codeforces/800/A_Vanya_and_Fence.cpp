#include<bits/stdc++.h>
 
using namespace std;
 
int main()
{
    int a,b,ans=0,x[1000];
    cin>>a>>b;
    for(int i=0;i<a;i++)
    {
        cin>>x[i];
        if (x[i]>b)ans=ans+2;
        else ans++;
    }
    cout<<ans;
}