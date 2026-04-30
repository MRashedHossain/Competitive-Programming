#include<bits/stdc++.h>
using namespace std;
int A[20] = {4,7,44,47,74,77,477,474,447,444,777,747,774,744};
int main()
{
    int n,p,ans=0,flg=0;
    cin>>n;
    for (int i=0; i<14; i++)
    {
        if (n%A[i]==0)
        {
            flg=1;
            break;
        }
    }
    if (flg==1)cout<<"YES"<<endl;
    else
    {
        p=n;
        while(p>0)
        {
            if (p%10==4 || p%10==7)ans=0;
            else
            {
                ans=1;
                break;
            }
            p=p/10;
        }
        if (ans==0)cout<<"YES"<<endl;
        else cout<<"NO"<<endl;
    }
}