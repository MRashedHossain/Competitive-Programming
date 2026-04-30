#include<bits/stdc++.h>
using namespace std;
int solve()
{
    int n;
    string s,sub;
    cin>>n>>s;
    map<string,int> m;
    for (int i=0; i<n-1; i++)
    {
        sub = s.substr(i,2);
        if (m[sub] == 0)m[sub]++;
    }
    int sum = 0;
    for (auto i : m)sum+=i.second;
    return sum;
}
int main()
{
    int tc;
    cin>>tc;
    while(tc--)
    {
        int ans = solve();
        cout<<ans<<endl;
    }
}