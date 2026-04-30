#include<bits/stdc++.h>
using namespace std;
int main()
{
    int tc;
    cin>>tc;
    while(tc--)
    {
        int n,a[64];
        cin>>n;
        for (int i=0;i<n;i++)cin>>a[i];
        sort (a,a+n);
        cout<<a[n-1]-a[0]<<endl;
    }
}