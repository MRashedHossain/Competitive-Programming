#include<bits/stdc++.h>
using namespace std;
int main()
{
    int a1,a2,m=0,c=0,x;
    cin>>x;
    for (int i=0;i<x;i++)
    {
        cin>>a1>>a2;
        if (a1>a2)m++;
        else if (a2>a1)c++;
    }
    if (m>c)cout<<"Mishka";
    else if (c>m)cout<<"Chris";
    else cout<<"Friendship is magic!^^";
 
 
}