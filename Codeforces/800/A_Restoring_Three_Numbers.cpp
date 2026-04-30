#include<bits/stdc++.h>
 
using namespace std;
 
int main()
{
    int a[4],b,c,d,x,y,z;
    cin>>a[0]>>a[1]>>a[2]>>a[3];
    for (int i=0; i<3 ; i++)
    {
        for (int j=0 ; j<3 ; j++)
        {
            if (a[j]>=a[j+1])swap(a[j],a[j+1]);
        }
    }
    //cout<<a[0]<<a[1]<<a[2]<<a[3];
    x=a[0];
    y=a[1];
    z=a[2];
    b=((x+y-z)/2);
    c=((x-y+z)/2);
    d=((y-x+z)/2);
    cout<<b<<" "<<c<<" "<<d;
}
 