#include<bits/stdc++.h>
using namespace std;
int main()
{
    int tc;
    cin>>tc;
    while(tc--)
    {
        int n,x;
        cin>>n>>x;
        n=n-2;
        if (n<=0)cout<<"1"<<endl;
        else if (n%x==0)cout<<(n/x)+1<<endl;
        else cout<<(n/x)+2<<endl;
    }
}