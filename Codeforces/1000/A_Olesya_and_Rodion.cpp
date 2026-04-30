#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,k;
    cin>>n>>k;
    if (k==10 && n==1)cout<<"-1";
    else
    {
        if (k==10)n--;
        cout<<k;
        for (int i=0; i<n-1; i++)cout<<"0";
    }
 
}