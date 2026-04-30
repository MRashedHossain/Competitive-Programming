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
    vector<int> v(n*m);
    for(int i=0;i<(n*m);i++)cin>>v[i];
    sort(v.rbegin(),v.rend());
    int val1 = v[0]-v[n*m-1],val2 = max(v[0]-v[n*m-2],v[1]-v[n*m-1]),tot = (n*m-1),nai = min(n,m)-1;
    cout<<val1*(tot-nai)+val2*nai<<endl;
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