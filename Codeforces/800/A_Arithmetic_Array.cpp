#include<bits/stdc++.h>
using namespace std;
int main()
{
    int tc;
    cin>>tc;
    while (tc--)
    {
        int n;
        cin>>n;
        int a[n],sum=0;
        for (int i=0; i<n; i++)cin>>a[i];
        sum=accumulate(a,a+n,sum);
        if (sum<n)cout<<"1"<<endl;
        else cout<<sum-n<<endl;
    }
}