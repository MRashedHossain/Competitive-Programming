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
 
void solve(int tc) {
    int n,m,k;cin>>n>>m>>k;
    int o = 0,t = 0;
    for(int i=0;i<n;i++){
        int x;cin>>x;
        (x == 1?o++:t++);
    }
    int res = 0;
    if(m>=o)k+=(m-o);
    else res += (o-m);
    if(k<t)res += (t-k);
    cout<<res<<endl;
}
signed main() {
    RASHED
    int TC = 1;
    //cin>>TC;
    for(int i=1; i<=TC; i++)solve(i);
    return 0;
}
/**
CASES:
 
*/