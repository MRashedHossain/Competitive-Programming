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
    int n,res = 0;
    cin>>n;
    map<int,int> f;
    f[0] = 1;
    int curr = 0;
    for(int i=1; i<=n; i++) {
        int x;
        cin>>x;
        curr+=x;
        if(f[curr]) {
            f.clear();
            res++;
            curr = 0;
            f[0] = 1;
        } else f[curr]++;
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
 