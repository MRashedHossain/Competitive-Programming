#include<bits/stdc++.h>
using namespace std;
 
#define RASHED ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
#define endl "\n"
#define int long long int
 
#define show(x) cout << #x << " = " << x << endl
#define inf (int)1e17
#define maxn 100010
 
#define F first
#define S second
 
void solve(int tc)
{
    int n;
    cin>>n;
    vector<int> v(n);
    string s;
    for(int i=0; i<n; i++)cin>>v[i];
    cin>>s;
    int alice = 0,bob = 0;
    for(int i=0; i<n; i++)
    {
        if(s[i] == 'B')bob+=v[i];
        else alice += v[i];
    }
    int res = bob,tmp = bob;
    for(int i=0; i<n; i++)
    {
        if(s[i] == 'A')
        {
            alice-=v[i];
            bob+=v[i];
        }
        else
        {
            alice+=v[i];
            bob-=v[i];
        }
        res = max(res,bob);
    }
    bob = tmp;
    for(int i=n-1; i>=0; i--)
    {
        if(s[i] == 'A')
        {
            alice-=v[i];
            bob+=v[i];
        }
        else
        {
            alice+=v[i];
            bob-=v[i];
        }
        res = max(res,bob);
    }
    cout<<res<<endl;
}
signed main()
{
    RASHED
    int TC = 1;
    //cin>>TC;
    for(int i=1; i<=TC; i++)solve(i);
    return 0;
}
/**
CASES:
 
*/