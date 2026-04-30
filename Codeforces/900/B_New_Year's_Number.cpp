#include<bits/stdc++.h>
using namespace std;
int main()
{
    int tc;
    cin>>tc;
    while (tc--)
    {
        int n,p;
        cin>>n;
        p=n%2020;
        n=n/2020;
        if (p<=n)cout<<"YES"<<endl;
        else cout<< "NO"<<endl;
    }
}