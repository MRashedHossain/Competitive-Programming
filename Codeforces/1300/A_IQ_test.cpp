#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,even=0,odd=0,a[110],ei,oi;
    cin>>n;
    for (int i=0;i<n;i++)
    {
        cin>>a[i];
        if (a[i]%2==0){even++;ei=i+1;}
        else {odd++;oi=i+1;}
    }
    if (even==1)cout<<ei<<endl;
    else cout<<oi<<endl;
}