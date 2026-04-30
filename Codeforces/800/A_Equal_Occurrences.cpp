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
    vector<int> v(n),f(n+1,0),ff;
    for(int i=0;i<n;i++){
        cin>>v[i];
        f[v[i]]++;
    }
    for(int i=1;i<=n;i++){
        if(f[i])ff.push_back(f[i]);
    }
    sort(ff.rbegin(),ff.rend());
    int res = 0;
    for(int i=0;i<ff.size();i++){
        res = max(res,ff[i]*(i+1));
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
 