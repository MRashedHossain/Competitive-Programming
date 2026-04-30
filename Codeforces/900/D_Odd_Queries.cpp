#include<bits/stdc++.h>
using namespace std;
int main()
{
    int tc;
    cin>>tc;
    while (tc--)
    {
        int n,q;
        cin>>n>>q;
        int a[n+8],b[n+8]= {0};
        for (int i=1; i<=n; i++)
        {
            cin>>a[i];
            b[i]=b[i-1]+a[i];
        }
        while(q--)
        {
            int w,x,y,sum=0;
            cin>>w>>x>>y;
            sum=(b[n]-b[x]+b[w-1])+((x-w+1)*y);
            if (sum%2)cout<<"YES"<<endl;
            else cout<<"NO"<<endl;
        }
    }
}