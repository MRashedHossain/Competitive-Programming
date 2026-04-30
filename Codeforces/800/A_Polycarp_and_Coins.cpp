#include<bits/stdc++.h>
using namespace std;
int main()
{
    int tc;
    cin>>tc;
    while(tc--)
    {
        int n;
        cin>>n;
        if (n%3==0)cout<<n/3<<" "<<n/3<<endl;
        else if (n%3==1)cout<<((n-1)/3)+1<<" "<<(n-1)/3<<endl;
        else cout<<(n-2)/3<<" "<<((n-2)/3)+1<<endl;
    }
}