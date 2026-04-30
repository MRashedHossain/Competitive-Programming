#include<bits/stdc++.h>
using namespace std;
#define ll long long int
 
int solve()
{
    int n,ans;
    cin>>n;
    int p=sqrt(n);
    if (p*p!=n)ans=p+1;
    else ans=p;
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