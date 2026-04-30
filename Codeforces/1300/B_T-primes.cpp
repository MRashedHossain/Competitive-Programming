#include<bits/stdc++.h>
using namespace std;
int main()
{
    int tc;
    cin>>tc;
    while (tc--)
    {
        long long int x,p,ans=0;
        cin>>x;
 
        if (x==1)cout<<"NO"<<endl;
        else
        {
            p=sqrt(x);
            for (int i=2;i*i<=p;i++)if (p%i==0){ans=1;break;}
            if (ans==0 && p*p==x)cout<<"YES"<<endl;
            else cout<<"NO"<<endl;
        }
    }
}