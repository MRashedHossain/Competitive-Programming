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
    int n;cin>>n;
    vector<int> v(n);
    for(int i=0;i<n;i++)cin>>v[i];
    sort(v.begin(),v.end());
    if(n%2){
        vector<int> odd(n+2,0),even(n+2,0);
        for(int i=0;i<n;i++){
            if(i%2)odd[i+1] = odd[i]+v[i];
            else odd[i+1] = odd[i];
        }
        for(int i=n-1;i>=0;i--){
            if(i%2)even[i] = even[i+1];
            else even[i] = even[i+1]+v[i];
        }
        int res = inf;
        for(int i=0;i<n;i++){
            int l = odd[i];
            int r = 0;
            if(i+1 <= n-1)r = even[i+1];
            int need = v[i]+l+r;
            res = min(res,need);
        }
        cout<<res<<endl;
    }else {
        int res = 0;
        for(int i=1;i<n;i+=2)res+=v[i];
        cout<<res<<endl;
    }
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
 