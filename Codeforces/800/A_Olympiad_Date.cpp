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
    int n,res = 0;
    cin>>n;
    vector<int> v(n+2);
    map<int,int> f;
    for(int i=1; i<=n; i++) cin>>v[i];
    for(int i=1; i<=n; i++) {
        f[v[i]]++;
        if(f[0] >= 3 && f[1] >= 1 && f[2] >= 2 && f[3] >= 1 && f[5]>=1) {
            res = i;
            break;
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