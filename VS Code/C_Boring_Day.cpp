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
    int n,L,R;
    cin>>n>>L>>R;
    int a[n+8],ps[n+8] = {0};
    for(int i=1; i<=n; i++) {
        cin>>a[i];
        ps[i] = ps[i-1]+a[i];
    }
    int res = 0;
    for(int i=1; i<=n;) {
//        show(i);
        int lo = i,hi = n,pos = -1;
        while(lo<=hi) {
            int mid = (lo+hi)/2;
            int val = ps[mid]-ps[i-1];
            if(val >= L && val <= R) {
                pos = mid;
                hi = mid-1;
            } else if (val < L)lo = mid+1;
            else if(val > R)hi = mid-1;
        }
        if(pos != -1) {
            res++;
            i = pos+1;
        } else i++;
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

