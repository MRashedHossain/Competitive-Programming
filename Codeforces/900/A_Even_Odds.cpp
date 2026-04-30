#include<bits/stdc++.h>
using namespace std;
int main()
{
    long long n,k,x;
    cin>>n>>k;
    if (n%2!=0)x=(n+1)/2;
    else x=n/2;
    if (k<=x)cout<<(k*2)-1<<endl;
    else cout<<(k-x)*2<<endl;
}