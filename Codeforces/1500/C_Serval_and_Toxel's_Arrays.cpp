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
    int n,m;cin>>n>>m;
    vector<int> v(n+2),rest(n+m+2,0);
    for(int i=1;i<=n;i++){
        cin>>v[i];
        rest[v[i]] = m+1;
    }
    for(int i=1;i<=m;i++){
        int p,u;cin>>p>>u;
        rest[v[p]] -= (m-i+1);
        rest[u] += (m-i+1);
        v[p] = u;
    }
    int res = (n*m*(m+1));
    for(int i=1;i<=n+m;i++){
        int now = (rest[i]*(rest[i]-1))/2;
        res -= now;
    }
    cout<<res<<endl;
}
signed main() {
    RASHED
    int TC = 1;
    cin>>TC;
    for(int i=1; i<=TC; i++)solve(i);
    return 0;
}
/**
CASES:
 
*/