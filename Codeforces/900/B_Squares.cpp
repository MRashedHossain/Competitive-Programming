#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,k,a[100];
    cin>>n>>k;
    for (int i=0;i<n;i++)cin>>a[i];
    sort(a,a+n,greater<int>());
    if (k>n)cout<<"-1"<<endl;
    else cout<<a[k-1]<<" "<<"0"<<endl;
}