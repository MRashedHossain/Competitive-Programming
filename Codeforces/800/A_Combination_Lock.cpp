#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,x,ans=0;
    string l,u;
    cin>>n>>l>>u;
    for (int i=0; i<n; i++)
    {
        x=abs(l[i]-u[i]);
        if (x>5) x=10-abs(l[i]-u[i]);
        ans+=x;
    }
    cout<<ans<<endl;
 
}