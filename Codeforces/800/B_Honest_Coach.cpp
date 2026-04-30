#include<bits/stdc++.h>
using namespace std;
int main()
{
    int tc;
    cin>>tc;
    while(tc--)
    {
        int n,a[60],ans=0,mn=1001;
        cin>>n;
        for (int i=0;i<n;i++)cin>>a[i];
        sort(a,a+n);
        for (int i=0;i<n-1;i++)if(abs(a[i]-a[i+1])<mn)mn=abs(a[i]-a[i+1]);
        cout<<mn<<endl;
    }
}