#include<bits/stdc++.h>
using namespace std;
#define ll long long int
 
int solve()
{
    string s;
    int cnt0=0,cnt1=0,ans;
    cin>>s;
    int n = s.size();
    for (int i=0; i<n; i++)
    {
        if (s[i] == '1')cnt1++;
        else cnt0++;
    }
    if (n<=2)ans=0;
    else if (cnt0 == cnt1)ans=cnt0-1;
    else ans = min(cnt0,cnt1);
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
 
 