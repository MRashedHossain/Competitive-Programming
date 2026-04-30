#include<bits/stdc++.h>
using namespace std;
int main()
{
    int tc;
    cin>>tc;
    while (tc--)
    {
        int a,b;
        cin>>a>>b;
        if (a==0)cout<<"1"<<endl;
        else cout<<(a*1+b*2)+1<<endl;
    }
}