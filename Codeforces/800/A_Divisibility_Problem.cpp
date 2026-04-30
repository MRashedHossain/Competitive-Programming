#include<bits/stdc++.h>
using namespace std;
int main()
{
    int tc;
    cin>>tc;
    while (tc--)
    {
        int a,b,p;
        cin>>a>>b;
        p=a%b;
        if (p==0)cout<<"0"<<endl;
        else cout<<b-p<<endl;
    }
}