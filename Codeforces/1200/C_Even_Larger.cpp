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
    vector<int> v(n+2),ps(n+2,0);
    for(int i=1;i<=n;i++){
        cin>>v[i];
        if(i%2)ps[i] = ps[i-1] - v[i];
        else ps[i] = ps[i-1] + v[i];
    }
    int res = 0,curr = -inf;
    vector<int> vis(n+2,0);
    for(int i=1;i<=n;i++){
        if(i >= 2){
            int now = vis[i-2]+ps[i-2];
            if(now > curr)curr = now;
            int need = curr - ps[i];
            if(res < need)res += (need - res);
        }
        vis[i] = res;
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
 