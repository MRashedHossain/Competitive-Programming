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
bool compare(pair<int,int> a,pair<int,int> b) {
    if(a.F != b.F)return a.F<b.F;
    return a.S>b.S;
}
void solve(int tc) {
    int n,k;
    cin>>n>>k;
    vector<int> h(n+8),p(n+8);
    vector<pair<int,int>> v;
    for(int i=0; i<n; i++)cin>>h[i];
    for(int i=0; i<n; i++)cin>>p[i];
    for(int i=0; i<n; i++)v.push_back({h[i],p[i]});
    sort(v.begin(),v.end());
    for(int i=n-2; i>=0; i--)v[i].S = min(v[i].S,v[i+1].S);
    ///for(auto i:v)cout<<i.F<<" "<<i.S<<endl;
    int curr = k,pre = k;
    while(pre>0) {
        int pos = -1,lo = 0,hi = n-1;
        while(lo<=hi) {
            int mid = (lo+hi)/2;
            if(v[mid].F>curr)pos = mid,hi = mid-1;
            else lo = mid+1;
        }
        if(pos == -1){
            cout<<"YES"<<endl;
            return;
        }
        pre -= v[pos].S;
        curr += pre;
    }
    cout<<"NO"<<endl;
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
 