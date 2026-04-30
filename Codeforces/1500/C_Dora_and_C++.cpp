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
    int n,a,b;cin>>n>>a>>b;
    int g = __gcd(a,b);///Bezout Theorem
    vector<int> v;
    for(int i=1;i<=n;i++){
        int x;cin>>x;int now = x%g;v.push_back(now);
    }
    sort(v.begin(),v.end());
    int res  = v[n-1] - v[0];
    for(int i=1;i<n;i++)res = min(res,v[i-1]+g-v[i]);
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