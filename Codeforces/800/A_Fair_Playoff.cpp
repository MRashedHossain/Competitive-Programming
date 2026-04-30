#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,max1,max2,min1,min2;
    cin>>n;
   while (n--)
   {
       int a,b,c,d;
       cin>>a>>b>>c>>d;
       max1=max(a,b);
       min1=min(a,b);
       max2=max(c,d);
       min2=min(c,d);
       if (max1<min2 || max2<min1)cout<<"NO"<<endl;
       else cout<<"YES"<<endl;
   }
}