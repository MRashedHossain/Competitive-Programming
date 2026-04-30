#include<bits/stdc++.h>
using namespace std;
int main()
{
    int tc;
    cin>>tc;
    while(tc--)
    {
        int a[8];
        for (int i=0;i<3;i++)cin>>a[i];
        sort(a,a+3);
        cout<<a[1]<<endl;
    }
}