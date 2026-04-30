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
    vector<int> v(n),sfx(n),pfx(n);
    for(int i=0;i<n;i++)cin>>v[i];
    int pos = 0,neg = 0;
    for(int i=0;i<n;i++){
        if(v[i]>0)pos+=v[i];
        pfx[i] = pos;
    }
    for(int i=n-1;i>=0;i--){
        if(v[i]<0)neg+=abs(v[i]);
        sfx[i] = neg;
    }
    int res = max(pfx[n-1],sfx[0]);
    for(int i=0;i<n;i++){
        res = max(res,pfx[i]+sfx[i]);
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