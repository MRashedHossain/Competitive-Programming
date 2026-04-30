#include<bits/stdc++.h>
using namespace std;
 
#define RASHED ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
#define endl "\n"
#define int long long int
 
#define show(x) cout << #x << " : " << x << endl
#define inf (int)1e17
#define maxn 100010
 
#define F first
#define S second
 
void solve(int tc) {
    int n,k,res = 0;cin>>n>>k;
    vector<int> bit(33,0);
    for(int i=1;i<=n;i++){
        int x;cin>>x;
        for(int j=0;j<31;j++){
            bit[j] += (x%2);
            x/=2;
        }
    }
    for(int i=30;i>=0;i--){
        if(n-bit[i]<=k){
            res+=(1 << i);
            k-=(n-bit[i]);
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
 
*/
 