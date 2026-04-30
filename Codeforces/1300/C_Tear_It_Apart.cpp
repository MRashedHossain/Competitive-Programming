#include<bits/stdc++.h>
using namespace std;
 
#define RASHED ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
#define endl "\n"
#define int long long int
 
#define show(x) cout << #x << " = " << x << endl
#define inf (int)1e17
#define maxn 200010
 
#define all(x) (x).begin(), (x).end()
#define rall(x) (x).rbegin(), (x).rend()
#define sz(x) ((int)(x).size())
 
#define F first
#define S second
 
vector<int> fib(maxn);
 
void build() {
    fib[0] = 0;
    fib[1] = 1;
    fib[2] = 2;
    for(int i=3; i<=200000; i++) {
        int cut = (i+1)/2;
        fib[i] = fib[i-cut] + 1;
    }
}
void solve(int tc) {
    string s;
    cin>>s;
    int n = sz(s);
    map<char,vector<int>> f;
    for(int i=0; i<n; i++)f[s[i]].push_back(i);
    int ans = inf;
    for(auto [c,curr]:f) {
        int need = fib[curr.front()];
        for(int i=1; i<sz(curr); i++) {
            need = max(need,fib[curr[i] - curr[i-1] - 1]);
        }
        need = max(need,fib[n - curr.back() - 1]);
        ans = min(ans,need);
//        show(need);
    }
    cout<<ans<<endl;
}
signed main() {
    RASHED
    build();
//    for(int i=1;i<=17;i++)cout<<fib[i]<<" ";
//    cout<<endl;
    int TC = 1;
    cin>>TC;
    for(int i=1; i<=TC; i++)solve(i);
    return 0;
}
/**
CASES:
 
*/
 
 
 
 