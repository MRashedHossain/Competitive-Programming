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
 
bool solve(int tc) {
    int n,k;
    cin>>n>>k;
    vector<int> v(n+2),ps(n+2,0);
    for(int i=1; i<=n; i++)cin>>v[i];
    for(int i=1; i<=n; i++) {
        if(v[i]<=k)ps[i] = 1;
        else ps[i] = -1;
    }
    for(int i=1; i<=n; i++)ps[i] += ps[i-1];
 
    int tot = ps[n];
    int mn   = ps[1];
    int pre  = (ps[1] >= 0 ? ps[1] : inf);
    int curr   = (ps[1] >= 0);
 
    int found = 0;
    for (int r = 2; r < n && !found; r++) {
        int now = ps[r];
        if (curr && pre <= now) return true;
        if (curr && now <= tot) return true;
        if (mn <= now && now <= tot) return true;
        if (now < mn) mn = now;
        if (now >= 0) {
            if (!curr || now < pre) {
                pre = now;
            }
            curr = 1;
        }
    }
    return found;
}
signed main() {
    RASHED
    int TC = 1;
    cin>>TC;
    for(int i=1; i<=TC; i++)cout<<(solve(i)?"YES":"NO")<<endl;
    return 0;
}
/**
CASES:
 
*/