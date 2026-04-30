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
    int n;string s;cin>>n>>s;
    vector<int> ll(n+2,0),rr(n+2,0);
    set<char> l,r;
    for(int i=0;i<n;i++){
        l.insert(s[i]);
        ll[i] = l.size();
    }
    for(int i=n-1;i>=0;i--){
        r.insert(s[i]);
        rr[i] = r.size();
    }
    int res = 0;
    for(int i=0;i<n-1;i++){
        res = max(res,ll[i]+rr[i+1]);
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
 