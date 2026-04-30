#include<bits/stdc++.h>
using namespace std;
 
#define RASHED ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
#define endl "\n"
#define int long long int
 
#define show(x) cout << #x << " = " << x << endl
#define inf (int)1e18
#define maxn 100010
 
#define F first
#define S second
 
void solve(int tc) {
    int n;cin>>n;
    vector<int> v(n+2);
    for(int i=1;i<=n;i++)cin>>v[i];
    for(int i=2,j=n-1;i<=(n/2);i++,j--){
        int swapping = 0,notswapping = 0;
        if(v[i] == v[i-1])notswapping++;
        if(v[j] == v[j+1])notswapping++;
        if(v[j] == v[i-1])swapping++;
        if(v[i] == v[j+1])swapping++;
        if(swapping<notswapping)swap(v[i],v[j]);
    }
    int res = 0;
    for(int i=1;i<n;i++)if(v[i] == v[i+1])res++;
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
 