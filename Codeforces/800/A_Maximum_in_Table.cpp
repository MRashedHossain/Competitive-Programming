#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,m,o,i,j;
    cin>>n;
    o=n*n;
    int a[o+8];
    for (j=1; j<=n; j++)a[j]=1;
    for (i=n+1; i<=o; i++)
    {
        if (i%n==1)a[i]=1;
        else a[i]=a[i-n]+a[i-1];
    }
    cout<<a[o]<<endl;
}