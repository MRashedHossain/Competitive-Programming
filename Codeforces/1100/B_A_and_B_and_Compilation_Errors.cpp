#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,x=0,y=0;
    cin>>n;
    int a[n+8],b[n+8],c[n+8],p=n-1,q=n-2;
    for (int i=0; i<n; i++)cin>>a[i];
    for (int i=0; i<p; i++)cin>>b[i];
    for (int i=0; i<q; i++)cin>>c[i];
    sort (a,a+n);
    sort(b,b+p);
    sort (c,c+q);
    for (int i=0; i<n; i++)
    {
        if (a[i]!=b[i])
        {
            x=a[i];
            break;
        }
    }
    for (int i=0; i<p; i++)
    {
        if (b[i]!=c[i])
        {
            y=b[i];
            break;
        }
    }
    cout<<x<<endl<<y<<endl;
}
/**
5
1 5 7 8 123
123 7 5 1
5 1 7
 
 
1 5 7 8 123
1 5 7
 
1 5  7  8    123
1 8 123
*/