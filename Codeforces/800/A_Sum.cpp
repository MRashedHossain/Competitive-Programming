#include<bits/stdc++.h>
using namespace std;
int main()
{
    int tc;
    cin>>tc;
    while(tc--)
    {
        int a[3];
        for (int i=0;i<3;i++)cin>>a[i];
        sort(a,a+3);
        if (a[2]==a[0]+a[1])cout<<"YES"<<endl;
        else cout<<"NO"<<endl;
    }
}