#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,a=2,b=3,p;
    cin>>n;
    if (n%2!=0)
    {
        n=n-b;
        n=n/2;
        p=n+1;
        cout<<p<<endl;
        cout<<b<<" ";
        for(int i=0;i<n;i++)
        {
            cout<<a<<" ";
        }
        cout<<endl;
    }
    else {
        n=n/2;
        cout<<n<<endl;
        for (int i=0;i<n;i++)
        {
            cout<<a<<" ";
        }
        cout<<endl;
    }
}