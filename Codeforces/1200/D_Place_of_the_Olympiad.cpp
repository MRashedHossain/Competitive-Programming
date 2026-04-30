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
bool check(int now,int n,int m,int k){
    int sit = (now-1)*(m/now) + m%now;
    sit*=n;
    return (sit>=k);
}
void solve(int tc) {
    int n,m,k;cin>>n>>m>>k;
    int lo = 1,hi = m,res = inf;
    while(lo<=hi){
        int mid = (lo+hi)/2;
        if(check(mid+1,n,m,k)){
            res = min(res,mid);
            hi = mid-1;
        }else lo = mid+1;
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