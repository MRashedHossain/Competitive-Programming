#include<bits/stdc++.h>
using namespace std;
 
void solve ()
{
    long long n,k;
    cin>>n>>k;
    if ((k*k)>n || (n%2 != k%2) || k>n)cout<<"NO"<<endl;
    else cout<<"YES"<<endl;
    return;
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