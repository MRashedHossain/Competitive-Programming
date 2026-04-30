#include<bits/stdc++.h>
using namespace std;
 
#define RASHED ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
#define endl "\n"
#define int long long int
 
#define show(x) cout << #x << " : " << x << endl
#define inf (int)1e17
#define maxn 100010
 
#define F first
#define S second
 
void solve(int tc) {
    int r,g,b;cin>>r>>g>>b;
    int rbar = (r+1)/2,gbar = (g+1)/2,bbar = (b+1)/2;
    rbar = ((rbar-1)*3)+0;
    gbar = ((gbar-1)*3)+1;
    bbar = ((bbar-1)*3)+2;
    int res = max(rbar,max(gbar,bbar))+30LL;
    cout<<res<<endl;
}
signed main() {
    RASHED
    int TC = 1;
    ///cin>>TC;
    for(int i=1; i<=TC; i++)solve(i);
    return 0;
}
 
 
 
 