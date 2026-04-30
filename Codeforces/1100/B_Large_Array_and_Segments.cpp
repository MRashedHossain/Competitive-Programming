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
    int n,k,x;
    cin>>n>>k>>x;
    vector<int> v(n);
    int tot = 0;
    for(int i=0; i<n; i++) {
        cin>>v[i];
        tot+=v[i];
    }
    reverse(v.begin(),v.end());
    if(tot*k<x) {
        cout<<0<<endl;
        return;
    }
    if(tot>=x) {
        int had = 0,curr = 0,i = 0;
        while(i<n && curr < x) {
            had++;
            curr+=v[i];
            i++;
        }
        int ans = (n*k) - had + 1;
        cout<<ans<<endl;
        return;
    }
    int lo = 1,hi = k,res = inf;
    while(lo<=hi) {
        int mid = (lo+hi)/2;
        if(mid*tot<x) {
            res = mid;
            lo = mid+1;
        } else hi = mid-1;
    }
    int curr = (res*tot),had = (n*res);
    int i = 0;
    while(i<n && curr < x) {
        had++;
        curr+=v[i];
        i++;
    }
    int ans = (n*k) - had + 1;
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