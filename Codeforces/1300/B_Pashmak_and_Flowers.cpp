#include<bits/stdc++.h>
using namespace std;
int main()
{
    long long n,a[200010],mn=0,mx=0,countmn=0,countmx=0,ans=0;
    cin>>n;
    for (int i=0; i<n; i++)cin>>a[i];
    sort(a,a+n);
    long long x=0,y=n-1;
    mx=a[n-1];
    mn=a[0];
    if (mx==mn)
    {
        for (int i=0; i<n; i++)
        {
            if(a[i]==mx)ans++;
        }
        ans=(ans*(ans-1))/2;
        cout<< "0 "<<ans<<endl;
    }
    else
    {
        while(true)
        {
            if (a[x]==mn)countmn++;
            else break;
            x++;
        }
        while (true)
        {
            if (a[y]==mx)countmx++;
            else break;
            y--;
        }
        cout<<mx-mn<<" "<<countmx*countmn<<endl;
    }
}