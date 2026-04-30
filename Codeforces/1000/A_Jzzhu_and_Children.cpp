#include<bits/stdc++.h>
using namespace std;
 
int solve(int n,int m)
{
    int a[111],ans=0,mx=0;
    for (int i=1; i<=n; i++)
    {
        cin>>a[i];
        int p = a[i]/m;
        if (a[i]==m)p=0;
        if (p!=0)
        {
            if (a[i]%m!=0)p++;
 
        }
        if (p>=mx)
        {
            mx=p;
            ans=i;
        }
    }
    return ans;
}
 
///5 100
///82 100 85 1 37
 
int main()
{
    int n,m;
    cin>>n>>m;
    cout<<solve(n,m)<<endl;
}