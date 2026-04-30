#include<bits/stdc++.h>
using namespace std;
 
int solve()
{
    int n;
    cin>>n;
    int a[n+8],ans=0;
    for(int i=0; i<n; i++)cin>>a[i];
    for(int i=0; i<n-1; i++)
    {
        int mn=min(a[i],a[i+1]),mx=max(a[i],a[i+1]);
        int res=0,fx=mn;
        while(true)
        {
            if(mx<=(fx*2))break;
            res++;
            fx*=2;
        }
        ans+=res;
    }
    return ans;
}
 
int main()
{
    int tc;
    cin>>tc;
    while(tc--)
    {
        cout<<solve()<<endl;
    }
    return 0;
}