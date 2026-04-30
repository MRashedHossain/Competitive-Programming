#include<bits/stdc++.h>
 
using namespace std;
 
int main()
{
    int a,b,c,d,e,f,g,h,x,ans=0;
    cin>>x;
    a=x%100;
    b=(x-a)/100;
    ans=ans+b;
    c=a%20;
    d=(a-c)/20;
    ans=ans+d;
    e=c%10;
    f=(c-e)/10;
    ans=ans+f;
    g=e%5;
    h=(e-g)/5;
    ans=ans+h;
    ans=ans+g;
    cout<<ans;
}
 