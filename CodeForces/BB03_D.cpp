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
    int n;
    cin>>n;
    vector<int> onsite;
    for(int i=1; i<=n; i++) {
        int x;
        cin>>x;
        onsite.push_back(x);
    }
    sort(onsite.rbegin(),onsite.rend());
    int m;
    cin>>m;
    vector<pair<int,int>> replay;
    int res[m+8],N = n+1;
    for(int i=1; i<=m; i++) {
        int x;
        cin>>x;
        replay.push_back({x,-i});
    }
    sort(replay.rbegin(),replay.rend());
    for(int i=0; i<m; i++) {
        int val = replay[i].F,pos = -(replay[i].S);
        int lo = 0,hi = n-1,pp = inf;
        while(lo <= hi) {
            int mid = (lo+hi)/2;
            if(val > onsite[mid]) {
                pp = min(pp,mid+1);
                hi = mid-1;
            } else lo = mid+1;
        }
        ///show(pp);
        if(pp == inf) {
            res[pos] = N;
            N++;
        } else res[pos] = pp+i;
    }
    for(int i=1; i<m; i++)cout<<res[i]<<" ";
    cout<<res[m];
}
signed main() {
    RASHED
    int TC = 1;
    ///cin>>TC;
    for(int i=1; i<=TC; i++)solve(i);
    return 0;
}
/**
CASES:

*/

