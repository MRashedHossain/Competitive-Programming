#include<bits/stdc++.h>
using namespace std;
int main()
{
    int tc;
    cin>>tc;
    while (tc--)
    {
        int n,p=1,sum=0,q=0,sum1=0;
        cin>>n;
        int a[n];
        for (int j=1; j<=n; j++)
        {
            a[q]=pow(2,j);
            q++;
        }
        //for (int i=0;i<n;i++)cout<<a[i]<<" ";
        //sum = accumulate(a,a+n,sum);
        //cout<<sum<<endl;
        for (int i=0; i<(q/2)-1; i++)sum1=sum1+a[i];
        sum1=sum1+a[n-1];
        for (int j=(q/2)-1; j<n-1; j++)sum=sum+a[j];
        cout<<sum1-sum<<endl;
    }
}