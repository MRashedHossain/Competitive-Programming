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
    int n,x,y,tot = 0;
    cin>>n>>x>>y;
    vector<int> v(n);
    for(int i=0; i<n; i++) {
        cin>>v[i];
        tot+=v[i];
    }
    sort(v.begin(),v.end());
    int res = 0;
    for(int i=0; i<n; i++) {
        int curr = tot-v[i],lo = i+1,hi = n-1,lp = -1,rp = -1;
        int ll = curr - x,rr = curr - y;
        while(lo<=hi) {
            int mid = (hi+lo)/2;
            if(v[mid]>ll)hi = mid-1;
            else {
                lo = mid+1;
                lp = mid;
            }
        }
        lo = i+1;
        hi = n-1;
        while(lo<=hi) {
            int mid = (hi+lo)/2;
            if(v[mid]<rr){
                lo = mid+1;
                rp = mid;
            }
            else hi = mid-1;
        }
//        show(curr);
//        show(ll);
//        show(rr);
//        show(lp);
//        show(rp);
        if(lp >= 0){
            if(rp == -1)res += (lp-i);
            else res += (lp-rp);
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
 