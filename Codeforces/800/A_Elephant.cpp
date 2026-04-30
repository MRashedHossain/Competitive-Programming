#include<bits/stdc++.h>
 
using namespace std;
 
int main()
{
    int a,b,x;
    cin>>a;
    x=a%5;
    b=(a-x)/5;
    if (x>0)b++;
    cout<<b;
}