#include<bits/stdc++.h>
using namespace std;
int n;
string s;
vector<char> v;
 
void solve()
{
    cin>>n>>s;
    int res=0,ans=1;
    while (res<n)
    {
        v.push_back(s[res]);
        res+=ans;
        ans++;
    }
    for(auto i:v)cout<<i;
    cout<<endl;
}
 
int main()
{
    solve();
}