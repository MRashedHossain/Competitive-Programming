#include<bits/stdc++.h>
 
using namespace std;
 
int main()
{
    int x,ans;
    cin>>x;
    int a[x];
    for (int i=0; i<x; i++)
    {
        cin>>a[i];
    }
    for (int j=0; j<x; j++)
    {
        if (a[j]%2==0)
        {
            ans=(a[j]-2)/2;
            cout<<ans<<endl;
        }
        else
        {
            ans=(a[j]-1)/2;
            cout<<ans<<endl;
        }
    }
}
 