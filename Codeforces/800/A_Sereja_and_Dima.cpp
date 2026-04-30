#include<bits/stdc++.h>
using namespace std;
int a[1010];
int main()
{
    int n,s=0,d=0,mx,k=0;
    cin>>n;
    for (int i=0;i<n;i++)cin>>a[i];
    int i=0,j=n-1;
    while (i<=j)
    {
        if (a[i]>a[j]){mx=a[i];i++;}
        else {mx=a[j];j--;}
        if (k%2==0){s+=mx;k++;}
        else {d+=mx;k++;}
    }
    cout<<s<< " "<<d;
}