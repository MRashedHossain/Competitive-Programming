#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,ans=1,mx=1,x;
    cin>>n;
    int a[n+6];
    for (int i=0; i<n; i++)cin>>a[i];
    for (int i=0; i<n-1; i++)
    {
        if(a[i]>a[i+1])
        {
            if(ans>mx)mx=ans;
            ans=1;
        }
        else
        {
            ans++;
            if(ans>mx)mx=ans;
        }
    }
    cout<<mx<<endl;
}