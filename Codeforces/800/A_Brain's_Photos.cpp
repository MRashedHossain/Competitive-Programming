#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,m,ans=0;
    char s;
    cin>>n>>m;
   for (int j=0;j<n;j++)
   {
       for (int i=0;i<m;i++)
       {
           cin>>s;
           if (s=='C' || s=='M' || s=='Y')ans++;
       }
   }
    if (ans==0)cout<<"#Black&White"<<endl;
    else cout<<"#Color"<<endl;
}