#include<bits/stdc++.h>
using namespace std;
int main()
{
    int tc;
    cin>>tc;
    while (tc--)
    {
        int n,evensum=0,oddsum=0,a=2,b=1;
        cin>>n;
        n=n/2;
        if (n%2==0)
        {
            cout<<"YES"<<endl;
            for (int i=0;i<n;i++){cout<<a<<" ";evensum+=a;a+=2;}
            for (int i=0;i<n-1;i++){cout<<b<<" ";oddsum+=b;b+=2;}
            cout<<evensum-oddsum;
            cout<<endl;
        }
        else cout<<"NO"<<endl;
    }
}