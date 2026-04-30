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
    vector<int> f(101,0);
    for(int i=1;i<=n;i++){
        int x;cin>>x;f[x]++;
    }
    int curr = 0,res = inf;
    for(auto i:f){
        if(i)curr = max(curr,i);
    }
    if(curr>=k)res = min(k-1,n);
    else res = n;
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