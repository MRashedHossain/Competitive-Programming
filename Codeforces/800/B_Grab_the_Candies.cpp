#include<bits/stdc++.h>
using namespace std;
int main()
{
    int tc;
    cin>>tc;
    while(tc--)
    {
        int n,s1=0,s2=0;
        cin>>n;
        int a[n];
        for (int j=0;j<n;j++)cin>>a[j];
       for (int i=0;i<n;i++)
       {
           if (a[i]%2==0)s1=s1+a[i];
           else s2=s2+a[i];
       }
       if (s1>s2)cout<<"YES"<<endl;
       else cout<<"NO"<<endl;
    }
}
 