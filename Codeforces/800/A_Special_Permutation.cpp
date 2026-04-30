#include<bits/stdc++.h>
using namespace std;
int main()
{
    int tc;
    cin>>tc;
    while (tc--)
    {
        int n,p;
        cin>>n;
        int a[n+8];
        if (n%2==0)
        {
            for (int i=(n); i>=1; i--)cout<<i<<" ";
        }
        else
        {
            p=((n+1)/2);
            for (int j=n; j>=1; j--)
            {
                a[j]=j;
            }
            swap(a[p],a[p+1]);
            for (int k=n; k>=1; k--)cout<<a[k]<<" ";
        }
        cout<<endl;
    }
}