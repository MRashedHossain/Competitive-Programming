#include<bits/stdc++.h>
using namespace std;
int main()
{
    int tc;
    cin>>tc;
    while (tc--)
    {
        int a,b,c,n,sum;
        cin>>a>>b>>c>>n;
        sum=a+b+c+n;
        if ((sum%3)==0 && a<=sum/3 && b<=sum/3 && c<=sum/3)cout<<"YES"<<endl;
        else cout<<"NO"<<endl;
    }
}