#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,k,i=1;
    cin>>n>>k;
    ///((i*n)-k)%10!=0 || (i*n)%10!=0
    while (true)
    {
        if (((i*n)-k)%10==0 || (i*n)%10==0)break;
        else i++;
    }
    cout<<i;
}