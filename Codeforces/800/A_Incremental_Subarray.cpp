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
    int n,m;
    cin>>n>>m;
    int mx = 0,one = 0;
    vector<int> v(m);
    for(int i=0; i<m; i++) {
        cin>>v[i];
        mx = max(mx,v[i]);
        if(v[i] == 1)one++;
    }
    if(v[0] == 1 &&  v[m-1] == m) {
        cout<<n-m+1<<endl;
        return;
    }
    if(v.back() == mx && !one){
        cout<<n-mx+1<<endl;
        return;
    }
    cout<<1<<endl;
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
 