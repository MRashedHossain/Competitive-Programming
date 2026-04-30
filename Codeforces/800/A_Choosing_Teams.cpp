#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,k,a[2010],ans=0;
    cin>>n>>k;
    k=5-k;
    for (int i=0;i<n;i++){cin>>a[i];if (a[i]<=k)ans++;}
    cout<<ans/3<<endl;
}