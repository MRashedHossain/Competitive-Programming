#include<bits/stdc++.h>
using namespace std;
int main()
{
    int tc;
    cin>>tc;
    while (tc--)
    {
        int a[2],n,ans=0;
        cin>>a[0]>>a[1]>>n;
        while (true)
        {
            sort (a,a+2);
            a[0]+=a[1];
            ans++;
            if (a[0]>n || a[1]>n)break;
        }
        cout<<ans<<endl;
    }
}