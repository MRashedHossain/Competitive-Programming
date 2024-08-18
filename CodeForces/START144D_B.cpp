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
    vector<int>f(n+2,0),vv;
    for(int i=0;i<n;i++){
        int x;cin>>x;
        f[x]++;
    }
    for(int i=1;i<=n;i++){
        if(f[i])vv.push_back(f[i]);
    }
    sort(vv.rbegin(),vv.rend());
//    for(auto i:vv)cout<<i<<" ";
//    cout<<endl;
    int res = 0,curr = 0;
    for(int i=0;i<vv.size();i++){
        int now = curr+vv[i];
        now/=(i+1);
        now*=(i+1);
        res = max(res,now);
        curr+=vv[i];
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

*/

