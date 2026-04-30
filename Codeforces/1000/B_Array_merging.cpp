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
    vector<int> a(n),b(n),af(2*n+2,0),bf(2*n+2,0);
    for(auto &i:a)cin>>i;
    for(auto &i:b)cin>>i;
    int curr = 0,idx = 0;
    while(idx < n) {
        int ii = idx;
        while(a[ii] == a[idx] && ii < n) {
            curr++;
            ii++;
        }
        af[a[idx]] = max(af[a[idx]],curr);
        curr = 0;
        idx = ii;
    }
    curr = 0;
    idx = 0;
    while(idx < n) {
        int ii = idx;
        while(b[ii] == b[idx] && ii < n) {
            curr++;
            ii++;
        }
        bf[b[idx]] = max(bf[b[idx]],curr);
        curr = 0;
        idx = ii;
    }
//    for(int i=1;i<=n;i++)cout<<af[i]<<" ";
//    cout<<endl;
//    for(int i=1;i<=n;i++)cout<<af[i]<<" ";
//    cout<<endl;
    int res = 0;
    for(int i=1;i<=2*n;i++){
        res = max(res,af[i] + bf[i]);
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
 