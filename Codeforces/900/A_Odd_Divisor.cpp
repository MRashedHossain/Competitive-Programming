#include<bits/stdc++.h>
using namespace std;
int main()
{
    int tc;
    cin>>tc;
    while (tc--)
    {
        long long n,ans=0;
        cin>>n;
        if (n==2)cout<<"NO"<<endl;
        else
        {
            while (n!=0)
            {
                if (n%2==1 && n!=1)
                {
                    ans=1;
                    break;
                }
                else n=n/2;
            }
            if (ans==0)cout<<"NO"<<endl;
            else cout<<"YES"<<endl;
        }
    }
}