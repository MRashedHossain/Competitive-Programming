#include<bits/stdc++.h>
 
using namespace std;
 
int main()
{
    int x,ans=0,s;
    cin>>x;
    int a[x+8],b[x+8];
    for (int i=0; i<x; i++)
    {
        cin>>a[i]>>b[i];
        if (b[i]-a[i]>1)ans++;
    }
    cout<<ans;
}