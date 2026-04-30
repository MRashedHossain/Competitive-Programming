#include<bits/stdc++.h>
using namespace std;
int main()
{
    int tc;
    cin>>tc;
    while (tc--)
    {
        int n,k;
        string s;
        cin>>n;
        int a[n+8],ans;
        for (int i=0; i<n; i++)cin>>a[i];
        for (int i=0; i<n; i++)
        {
            ans=a[i];
            cin>>k>>s;
            for (int j=0; j<k; j++)
            {
                if (s[j]=='D')ans++;
                else if (s[j]=='U')ans--;
            }
            if (ans>9)ans-=10;
            else if (ans<0)ans+=10;
            a[i]=ans;
        }
        for (int i=0; i<n; i++)cout<<a[i]<<" ";
        cout<<endl;
    }
}