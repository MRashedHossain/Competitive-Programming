#include<bits/stdc++.h>
using namespace std;

#define RASHED ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
#define endl "\n"
#define int long long int

#define show(x) cout << #x << " = " << x << endl
#define inf (int)1e17
#define maxn 200010

#define F first
#define S second
vector<int> f(maxn,0),pf(maxn,0);
void solve(int tc) {
    int n,k,q;cin>>n>>k>>q;
    for(int i=1;i<=n;i++){
        int x,y;cin>>x>>y;
        f[x]++;f[y+1]--;
    }
    for(int i=1;i<=maxn;i++)f[i] += f[i-1];
    for(int i=1;i<=maxn;i++)if(f[i] >= k)pf[i] = 1;
    for(int i=1;i<=maxn;i++)pf[i] += pf[i-1];
    while(q--){
        int x,y;cin>>x>>y;
        cout<<pf[y]-pf[x-1]<<endl;
    }
}
signed main() {
    RASHED
    int TC = 1;
    ///cin>>TC;
    for(int i=1; i<=TC; i++)solve(i);
    return 0;
}
/**
CASES:

*/

