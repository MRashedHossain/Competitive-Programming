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
    int n,k;
    cin>>n>>k;
    map<int,int> f;
    vector<int> v(n);
    for(int i=0; i<n; i++) {
        cin>>v[i];
        f[v[i]]++;
    }
    sort(v.rbegin(),v.rend());
    int res = 0;
    for(int i=0; i<n; i++) {
        if(f[v[i]] == 0)continue;
        int x = v[i],y = k-v[i];
        if(x == y) {
            if(f[x]>1) {
                res++;
                f[x] -= 2;
            }
        } else {
            if(f[x] && f[y]) {
                res++;
                f[x]--;
                f[y]--;
            }
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
CASES:
 
*/
 