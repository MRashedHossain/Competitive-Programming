#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,x=0;
    cin>>n;
    while (n!=0)
    {
        x=x+n%2;
        n=n/2;
    }
    cout<<x;
}