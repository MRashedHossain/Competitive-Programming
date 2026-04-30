#include<bits/stdc++.h>
using namespace std;
#define ll long long int
 
void solve()
{
    int n;
    string s;
    cin>>n>>s;
    for(int i=1; i<=n; i++)cout<<s[n-1];
    cout<<endl;
    return ;
}
 
int main()
{
    int tc;
    cin>>tc;
    while(tc--)
    {
        solve();
    }
    return 0;
}
 
 