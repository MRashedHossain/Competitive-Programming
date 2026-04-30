#include<bits/stdc++.h>
 
using namespace std;
 
int main()
{
    int a,b,i;
    cin>>a>>b;
    for (i=1; i<=100; i++)
    {
        a=a*3;
        b=b*2;
        if (a>b)break;
    }
    cout<<i;
}