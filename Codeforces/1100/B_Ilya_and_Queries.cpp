#include<bits/stdc++.h>
using namespace std;
int main()
{
    string s;
    long long q;
    cin>>s>>q;
    long long n=s.size();
    n+=8;
    long long a[n],b[n]= {0};
    for (int i=0; i<s.size(); i++)
    {
        if (s[i]==s[i+1])a[i]=1;
        else a[i]=0;
        b[i+1]=b[i]+a[i];
    }
    while(q--)
    {
        long long x,y,ans=0;
        cin>>x>>y;
        y--;
        ans=(b[y]-b[x]);
        if (a[x-1]!=0)ans++;
        cout<<ans<<endl;
    }
}