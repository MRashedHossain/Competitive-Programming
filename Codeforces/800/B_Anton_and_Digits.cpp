#include<bits/stdc++.h>
using namespace std;
int main()
{
    int a[3],b[2],mx,mx1;
    cin>>a[0]>>b[0]>>a[1]>>a[2];
    mx=*min_element(a,a+3);
    b[1]=a[0]-mx;
    if (b[1]<=0)cout<<mx*256<<endl;
    else
    {
        mx1=*min_element(b,b+2);
        cout<<(mx*256)+(mx1*32)<<endl;
    }
}