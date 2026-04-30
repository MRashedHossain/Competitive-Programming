#include<bits/stdc++.h>
using namespace std;
 
#define endl "\n"
#define RASHED ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
#define int long long int
#define F first
#define S second
 
bool valid(vector<pair<int,int>> v,int mid,int n) {
    int l = 0,r = mid;
    for(int i=0; i<n; i++) {
        if(l>r)return false;
        if(r >= v[i].F && l <= v[i].S) {
            l = max(l,v[i].F);
            r = min(r,v[i].S);
            l -= mid;
            r += mid;
        } else return false;
    }
    return true;
}
void solve() {
    int n,ans = INT_MAX,mx = 0;
    cin>>n;
    vector<pair<int,int>> v;
    for(int i=0; i<n; i++) {
        int x,y;
        cin>>x>>y;
        v.push_back({x,y});
        mx = max(mx,max(x,y));
    }
    int hi = mx,lo = 0;
    while(lo<=hi) {
        int mid = (lo+hi)/2;
        if(valid(v,mid,n)) {
            ans = min(ans,mid);
            hi = mid-1;
        } else lo = mid+1;
    }
    cout<<ans<<endl;
}
signed main() {
    RASHED
    int tc;
    cin>>tc;
    while(tc--)solve();
    return 0;
}