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
    int n,k;cin>>n>>k;
    vector<int> v(n),f(n+2,0);
    for(int i=0;i<n;i++){
        int x;cin>>x;
        v[i] = x;
        f[x]++;
    }
    int mex = 0;
    for(int i=0;i<=n;i++){
        if(f[i] == 0){
            mex = i;
            break;
        }
    }
    if(mex > k)cout<<f[k]<<endl;
    else if(mex < k){
        int missing = 0;
        for(int i=mex;i<k;i++){
            if(f[i] == 0)missing++;
        }
        cout<<max(missing,f[k])<<endl;
    }else cout<<0<<endl;
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
 