#include<bits/stdc++.h>
using namespace std;
 
#define RASHED ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
#define endl "\n"
#define int long long int
 
#define show(x) cout << #x << " : " << x << endl
#define inf (int)1e17
#define maxn 100010
 
#define F first
#define S second
 
void solve(int tc) {
    int n,m;cin>>n>>m;
    int v[n+8],ps[n+8] = {0};
    for(int i=1;i<=n;i++)cin>>v[i];
    sort(v+1,v+n+1);
    for(int i=1;i<=n;i++)ps[i] = ps[i-1]+v[i];
    int res = 0;
    for(int i=1;i<=n;i++){
        int lo = i,hi = n;
        while(lo<=hi){
            int mid = (lo+hi)/2;
            int diff = (v[mid]-v[i]),flower = ps[mid]-ps[i-1];
            if(diff<=1 && flower<=m){
                res = max(res,flower);
                lo = mid+1;
            }else hi = mid-1;
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
 
*/
 