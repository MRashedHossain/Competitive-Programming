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
    int n,k;
    cin>>n>>k;
    vector<int> v(n);
    for(int i=0; i<n; i++)cin>>v[i];
    if(k == 1) {
        int res  =v[0]+v[n-1];
        for(int i=1; i<n-1; i++) {
            res = max(res,v[i] + max(v[0],v[n-1]));
        }
        cout<<res<<endl;
    } else {
        sort(v.rbegin(),v.rend());
        int res = 0;
        for(int i=0; i<=k; i++)res += v[i];
        cout<<res<<endl;
    }
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