#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,flg=1,mx=1;
    cin>>n;
    int a[n];
    for (int k=0; k<n; k++)cin>>a[k];
    for (int i=1; i<n; i++)
    {
        if(a[i]>a[i-1])
        {
            flg++;
            if (flg>mx)mx=flg;
        }
        else flg=1;
    }
    cout<<mx<<endl;
}