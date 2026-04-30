#include<bits/stdc++.h>
using namespace std;
 
#define endl "\n"
#define RASHED ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
///#define ll long long int
///#define inf 99999999999999999
///#define F first
///#define S second
///#define show(x) cout << #x << " : " << x << endl
///#define maxn 200100
 
void solve()
{
    int n,ans = 0;
    cin>>n;
    vector<int>v;
    for (int i=0;i<2*n;i++){
        int k;cin>>k;
        v.push_back(k);
    }
    sort(v.begin(),v.end());
    for (int i=0;i<n-1;i++)ans+=abs(v[i]-v[i+1]);
    for (int i=n;i<(2*n)-1;i++)ans+=abs(v[i]-v[i+1]);
    cout<<ans<<endl;
    for (int i=0,j = n;i<n;i++,j++)cout<<v[i]<<" "<<v[j]<<endl;
}
int main()
{
    RASHED
    int tc;
    cin>>tc;
    while(tc--)
    {
        solve();
    }
    return 0;
}
 