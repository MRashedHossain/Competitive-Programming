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
    vector<int> v(1e5+4),f(1e5+4,0),ff(1e5+4,0),rest;
    for(int i=1;i<=n;i++){
        cin>>v[i];
        f[v[i]]++;
    }
    for(int i=1;i<=n;i++){
        if(f[i] == 0)rest.push_back(i);
    }
    for(int i=1;i<=n;i++){
        if(ff[v[i]] == 0 && v[i] <= n){
            cout<<v[i]<<" ";
            ff[v[i]]++;
        }else {
            cout<<rest.back()<<" ";
            rest.pop_back();
        }
    }
}
signed main() {
    RASHED
    int TC = 1;
    ///cin>>TC;
    for(int i=1; i<=TC; i++)solve(i);
    return 0;
}
/**
CASES:
 
*/