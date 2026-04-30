#include<bits/stdc++.h>
using namespace std;
int main()
{
    int tc;
    cin>>tc;
    while (tc--)
    {
        int n,k,a[40],b[40],p=0,sum=0;
        cin>>n>>k;
        for (int i=0;i<n;i++)cin>>a[i];
        for (int i=0;i<n;i++)cin>>b[i];
        sort(a,a+n);
        sort(b,b+n,greater<int>());
        for (int j=0;j<n;j++)
        {
            if (p==k)break;
            for (int i=0;i<n;i++)
            {
                if (b[i]>a[j]){swap(a[i],b[j]);p++;}
            }
        }
        for (int i=0;i<n;i++)sum+=a[i];
        cout<<sum<<endl;
    }
}