#include<bits/stdc++.h>
using namespace std;
 
void solve()
{
    int n;cin>>n;
    vector<int> f(n+2,0),v(n);
    for(int i=1;i<=n;i++){
        int x;cin>>x;
        f[x] = i;
        v[i-1] = x;
    }
    if(is_sorted(v.begin(),v.end()))cout<<0<<endl;
    else if(f[1] == 1 || f[n] == n)cout<<1<<endl;
    else if(f[1] == n && f[n] == 1)cout<<3<<endl;
    else cout<<2<<endl;
}
 
int main()
{
    int tc=1;
    cin>>tc;
    while(tc--)solve();
}
 