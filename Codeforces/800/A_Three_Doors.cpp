//https://codeforces.com/contest/1709/submission/199494660
#include<bits/stdc++.h>
using namespace std;
int main()
{
    int tc;
    cin>>tc;
    while (tc--)
    {
        int n,a[3],x;
        cin>>n;
        for (int i=0; i<3; i++)cin>>a[i];
        if (a[n-1]==0)cout<<"NO"<<endl;
        else
        {
            x=a[n-1];
            if (a[x-1]==0)cout<<"NO"<<endl;
            else cout<<"YES"<<endl;
        }
    }
}