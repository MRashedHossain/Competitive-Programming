#include<bits/stdc++.h>
using namespace std;
 
int solve()
{
    int n,a,b;
    cin>>n>>a>>b;
    if (a+b>n)return n-a;
    else if (a+b<n)return b+1;
    else return b;
}
 
int main()
{
    cout<<solve()<<endl;
}