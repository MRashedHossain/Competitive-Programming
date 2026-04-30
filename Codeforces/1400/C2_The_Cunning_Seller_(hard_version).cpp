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
 
vector<int> pow3;
 
void build() {
    pow3.push_back(1);
    while (pow3.back() <= 1000000000LL / 3) pow3.push_back(pow3.back() * 3LL);
}
void solve(int tc) {
    int n,k;
    cin>>n>>k;
    if(k >= n) {
        cout<<n*3<<endl;
        return;
    }
    int sz = pow3.size()+4;
    vector<int> f(sz,0);
    f[0] = n;
    int curr = n,res = (n*3);
    for(int i=0; i<sz && curr>k; i++) {
        if(f[i] < 3)continue;
        int has = (f[i]/3),need = curr - k;
        int got = (need+1)/2;
        int sure = min(has,got);
        if(sure > 0) {
            f[i] -= (3*sure);
            if(i+1 <= sz)f[i+1] += sure;
            curr -= (2*sure);
            res += (sure*pow3[i]);
        }
    }
    cout<<(curr > k?-1:res)<<endl;
}
signed main() {
    RASHED
    build();
    int TC = 1;
    cin>>TC;
    for(int i=1; i<=TC; i++)solve(i);
    return 0;
}
/**
CASES:
 
*/
 