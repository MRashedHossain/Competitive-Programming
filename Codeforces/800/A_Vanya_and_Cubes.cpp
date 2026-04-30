#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,sum1=0,sum2=0,flag=0;
    cin>>n;
    for (int i=1;i<=n;i++)
    {
        sum1=sum1+i;
        sum2=sum2+sum1;
        if (sum2>n)break;
        else flag++;
    }
    cout<<flag<<endl;
}