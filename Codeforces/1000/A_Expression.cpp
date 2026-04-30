#include<bits/stdc++.h>
using namespace std;
int main()
{
   int a,b,c,m1,m2,m3,m4,mx1,mx2;
   cin>>a>>b>>c;
   m1=a+b+c;
   m2=a*b*c;
   m3=a*(b+c);
   m4=(a+b)*c;
   mx1=max(m1,m2);
   mx2=max(m3,m4);
   cout<<max(mx1,mx2);
}