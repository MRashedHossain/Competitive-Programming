#include<bits/stdc++.h>
using namespace std;
int main()
{
    int tc;
    cin>>tc;
    while (tc--)
    {
        int a,b,ans1=0,ans2=0;
        cin>>a>>b;
        ans1=min(a,b)*2;
        ans1=ans1*ans1;
        ans2=max(a,b);
        ans2=ans2*ans2;
        cout<<max(ans1,ans2)<<endl;
    }
}