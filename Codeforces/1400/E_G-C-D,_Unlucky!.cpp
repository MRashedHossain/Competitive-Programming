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
 
bool solve(int tc) {
    int n;
    cin>>n;
    vector<int> pre(n+2),suf(n+2),got(n+2);
    for(int i=1; i<=n; i++)cin>>pre[i];
    for(int i=1; i<=n; i++)cin>>suf[i];
    for(int i=1; i<=n; i++)got[i] = lcm(pre[i],suf[i]);
    if(suf[1] != pre[n])return false;
    int curr = 0;
    for(int i=1; i<=n; i++) {
        curr = __gcd(curr,got[i]);
        if(curr != pre[i])return false;
    }
    curr = 0;
    for(int i=n; i>=1; i--) {
        curr = __gcd(curr,got[i]);
        if(curr != suf[i])return false;
    }
    return true;
}
signed main() {
    RASHED
    int TC = 1;
    cin>>TC;
    for(int i=1; i<=TC; i++)cout<<(solve(i)?"YES":"NO")<<endl;
    return 0;
}
/**
CASES:
 
*/