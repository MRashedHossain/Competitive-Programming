#include<bits/stdc++.h>
 
using namespace std;
 
int main()
{
    int a,b,c,x;
    cin>>a>>b;
    if (a>=b)
    {
        x=b;
        c=a-b;
        if (c>1)
        {
            c=((c-(c%2))/2);
        }
        else
        {
            c=0;
        }
    }
    else
    {
        x=a;
        c=b-a;
        if (c>1)
        {
            c=((c-(c%2))/2);
        }
        else
        {
            c=0;
        }
    }
    cout<<x<<" "<<c;
}
 