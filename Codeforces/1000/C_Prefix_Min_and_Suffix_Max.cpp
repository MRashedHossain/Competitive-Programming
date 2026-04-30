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
    vector<int> v(n+2),pre(n+2,inf),suf(n+2,-inf);
    for(int i=1;i<=n;i++)cin>>v[i];
    for(int i=1;i<=n;i++){
        pre[i] = min(pre[i-1],v[i]);
    }
    for(int i=n;i>=1;i--){
        suf[i] = max(suf[i+1],v[i]);
    }
 
    for(int i=1;i<=n;i++){
        if(pre[i-1] >= v[i] || suf[i+1] <= v[i])cout<<1;
        else cout<<0;
    }
    cout<<endl;
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
 