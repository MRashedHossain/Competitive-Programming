#include<bits/stdc++.h>
using namespace std;
 
#define RASHED ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
#define endl "\n"
#define int int64_t
 
#define show(x) cout << #x << " = " << x << endl
#define inf (int)1e17
#define maxn 100010
 
#define F first
#define S second
 
void solve(int tc) {
    int n,k,d,w;cin>>n>>k>>d>>w;
    vector<int> v(n+2);
    for(int i=1;i<=n;i++)cin>>v[i];
    int curr = 0,res = 1,idx = 1;
    int L = v[idx],R = v[idx]+d+w,now = 0;
    for(int i=1;i<=n;i++){
        if(now < k && v[i] <= R)now++;
        else {
            res++;
            R = v[i]+d+w;
            now = 1;
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