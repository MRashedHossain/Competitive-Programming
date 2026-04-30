#include<bits/stdc++.h>
using namespace std;
int main()
{
    int tc;
    cin>>tc;
    while (tc--)
    {
        long long n,x=3,p=2;
        cin >>n;
        while (true)
        {
            if (n%x==0)break;
            else
            {
                x+=pow(2,p);
                p++;
            }
        }
        cout<<n/x<<endl;
    }
}