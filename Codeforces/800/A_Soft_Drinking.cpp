#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,k,l,c,d,p,nl,np,x,y,z,a[3],ans;
    cin>>n>>k>>l>>c>>d>>p>>nl>>np;
    x=k*l;
    x=x/nl;
    a[0]=x;
    y=c*d;
    a[1]=y;
    z=p/np;
    a[2]=z;
    ans=*min_element(a,a+3);
    ans=ans/n;
    cout<<ans;
}