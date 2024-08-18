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
    int n;cin>>n;
    vector<int> v(n+8),res(n+8,-1);
    for(int i=1;i<=n;i++)cin>>v[i];
    res[n] = v[n];
    for(int i=n-1;i>=1;i--){
        if(v[i]>v[i+1])res[i] = max(v[i],res[i+1]);
        else res[i] = res[i+1]+v[i];
    }
    cout<<res[1]<<endl;
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

