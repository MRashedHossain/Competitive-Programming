#include<bits/stdc++.h>
using namespace std;
 
void solve()
{
    int n;
    cin>>n;
    if (n==1)cout<<"-1"<<endl;
    else
    {
        for (int i=0;i<n-1;i++)cout<<"9";
        cout<<"8";
        cout<<endl;
    }
}
 
int main()
{
    int tc;
    cin>>tc;
    while (tc--)
    {
        solve();
    }
    return 0;
}