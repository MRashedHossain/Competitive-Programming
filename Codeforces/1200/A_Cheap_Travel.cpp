#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,m,a,b,mn,ans,x,y,y1;
    cin>>n>>m>>a>>b;
    if ((b/m)<a)
    {
        if (n%m==0)cout<<((n/m)*b)<<endl;
        else
        {
            x=n%m;
            y1=(n-x)/m;
            y=y1*b;
            x=x*a;
            if ((x+y)<((y1+1)*b))cout<<x+y<<endl;
            else cout<<(y1+1)*b<<endl;
        }
 
    }
    else cout<<(n*a)<<endl;
}