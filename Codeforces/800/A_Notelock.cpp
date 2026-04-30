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
    int n,k;
    cin>>n>>k;
    string s;
    cin>>s;
    int res = 0;
    for(int i=0; i<n; i++)
    {
        if(s[i] == '1')
        {
            bool fnd = true;
            for(int j=i-1; j>=max(0LL,i-k+1); j--)
            {
                if(s[j] == '1')
                {
                    fnd = false;
                    break;
                }
            }
            if(fnd)res++;
        }
    }
    cout<<res<<endl;
}
signed main()
{
    RASHED
    int TC = 1;
    cin>>TC;
    for(int i=1; i<=TC; i++)solve(i);
    return 0;
}
/**
CASES:
 
*/
 