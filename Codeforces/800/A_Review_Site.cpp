#include<bits/stdc++.h>
using namespace std;
#define ll long long int
 
int solve()
{
    int n,cnt2=0,ans=0,x;
    cin>>n;
    for (int i=0;i<n;i++)
    {
        cin>>x;
        if (x==2)cnt2++;
    }
    ans = n-cnt2;
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
 
 