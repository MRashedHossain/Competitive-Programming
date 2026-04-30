#include<bits/stdc++.h>
using namespace std;
 
#define RASHED ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
#define endl "\n"
#define int long long int
 
#define show(x) cout << #x << " = " << x << endl
#define inf (int)1e17
#define maxn 200010
 
#define all(x) (x).begin(), (x).end()
#define rall(x) (x).rbegin(), (x).rend()
#define sz(x) ((int)(x).size())
 
#define F first
#define S second
 
void solve(int tc) {
    int n,h,w;
    cin>>n>>h>>w;
    vector<int> can;
    int mx = max(h,w);
    for(int i=1; i<=n; i++) {
        int x;
        cin>>x;
        if(x <= mx)can.push_back(x);
    }
    if(can.empty()) {
        cout<<0<<endl;
        return;
    }
    sort(all(can));
    int l = 0,r = sz(can)-1,ans = 0;
    while(l < r) {
        int ll = can[l],rr = can[r];
        if(max(h,w) >= max(ll,rr) && min(h,w) >= min(ll,rr)) {
            l++;
            r--;
            ans++;
        } else break;
    }
    cout<<ans<<endl;
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