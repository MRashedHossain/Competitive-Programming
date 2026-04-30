#include<bits/stdc++.h>
using namespace std;
int main()
{
    int a,b,c,d,e,ans=0;
    cin>>a;
    int x[a+8];
    for (int i=0; i<a; i++)
    {
        cin >> x[i];
        if (i==0)
        {
            b=x[0];
            continue;
        }
        else
        {
            if (x[i]>=b)b=x[i];
        }
    }
    for (int j=0; j<a; j++)
    {
        c=b-x[j];
        ans=ans+c;
    }
    cout<<ans;
}
 