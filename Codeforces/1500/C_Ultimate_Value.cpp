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
    int n;
    cin>>n;
    vector<int> v(n+2);
    int oddl = inf,oddr = -inf,evenl = inf,evenr = -inf,fx = 0;
    int oddp = inf,oddm = -inf,evenp = -inf,evenm = inf;
    for(int i=1; i<=n; i++) {
        cin>>v[i];
        if(i%2) {
            fx += v[i];
            oddl = min(oddl,i);
            oddr = max(oddr,i);
            oddp = min(oddp,i+(2*v[i]));
            oddm = max(oddm,i-(2*v[i]));
        } else {
            fx += (-v[i]);
            evenl = min(evenl,i);
            evenr = max(evenr,i);
            evenp = max(evenp,i+(2*v[i]));
            evenm = min(evenm,i-(2*v[i]));
        }
    }
    int z = 0;
    if(oddr != -inf)z = max(z,(oddr - oddl));
    if(evenr != inf)z = max(z,(evenr - evenl));
    int x = -inf,y = -inf;
    if(evenp > -inf && oddp < inf)x = evenp - oddp;
    if(oddm > -inf && evenm < inf)y = oddm - evenm;
    int fy = max(0LL,max(z,max(x,y)));
    cout<<fx+fy<<endl;
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
 