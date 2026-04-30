#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,flag=0;
    cin>>n;
    if (n%2==1)
    {
        for (int i=1;i<(n);i++)
        {
            if (n%i==0)flag++;
        }
        cout<<flag<<endl;
    }
    else
    {
        for (int i=1;i<(n);i++)
        {
            if (n%i==0)flag++;
        }
        cout<<flag<<endl;
    }
}