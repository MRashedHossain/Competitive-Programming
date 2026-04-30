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
    int n,k,res;
    cin>>n>>k;
    vector<int> v(n);
    for(int i=0; i<n; i++)cin>>v[i];
    if(k>2) {
        cout<<0<<endl;
        return;
    }
    sort(v.begin(),v.end());
    if(k == 1) {
        res = v[0];
        for(int i=1; i<n; i++) {
            res = min(res,v[i]-v[i-1]);
        }
        cout<<res<<endl;
        return;
    }
    res = v[0];
    for(int i=1; i<n; i++) {
        res = min(res,v[i]-v[i-1]);
    }
    for(int i=0; i<n; i++) {
        for(int j=i+1; j<n; j++) {
            int curr = v[j]-v[i],lo = 0,hi = n-1,posA = 0,posB = 0;
            while(lo<=hi) {
                int mid = (lo+hi)/2;
                if(v[mid] <= curr)posA = mid,lo = mid+1;
                else hi = mid-1;
            }
            lo = 0,hi = n-1;
            while(lo<=hi) {
                int mid = (lo+hi)/2;
                if(v[mid] >= curr)posB = mid,hi = mid-1;
                else lo = mid+1;
            }
            res = min(res,abs(curr-v[posA]));
            if(posB)res = min(res,abs(curr-v[posB]));
            else res = min(res,abs(curr-v[n-1]));
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
1
4 2
5 8 1000 1006
*/
 