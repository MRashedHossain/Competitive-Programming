#include<bits/stdc++.h>
using namespace std;
#define ll long long int
 
void solve()
{
    string s;
    int cnt_l=0,cnt_r=0,ans=0,n;
    cin>>n>>s;
    cout<<n+1<<endl;
    return;
    for(int i=0; i<n; i++)
    {
        if (s[i] == 'R')cnt_r++;
        else cnt_l++;
    }
    ans=(cnt_l+cnt_r+1);
    ///if (cnt_l != cnt_r)ans++;
    cout<<ans<<endl;
}
 
int main()
{
    solve();
    return 0;
}