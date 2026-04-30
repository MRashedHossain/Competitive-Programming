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
    vector<pair<int,int>> v;
    map<int,int> f;
    for(int i=0; i<n; i++) {
        int x;
        cin>>x;
        f[x]++;
    }
    for(auto i:f)v.push_back({i.F,i.S});
    int nn = v.size();
    for(int i=1; i<nn; i++)v[i].S = v[i-1].S+v[i].S;
    int res = 0;
    //    for(auto i:v)cout<<i.F<<" ";
//    cout<<endl;
//    for(auto i:v)cout<<i.S<<" ";
//    cout<<endl;
    for(int i=0; i<nn; i++) {
        int lo = i,hi = nn-1;
        while(lo<=hi) {
            int mid = (lo+hi)/2;
            int gap = v[mid].F - v[i].F + 1,now = mid-i+1;
            if(gap == now) {
                if(now<=k) {
                    if(i == 0)res = max(res,v[mid].S);
                    else res = max(res,v[mid].S-v[i-1].S);
                    lo = mid+1;
                } else hi = mid-1;
            } else hi = mid-1;
        }
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
 