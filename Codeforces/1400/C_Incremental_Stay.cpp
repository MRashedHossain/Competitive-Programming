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
    int n;
    cin>>n;
    vector<int> res(n+2);
    n*=2;
    vector<int> v(n+2);
    for(int i=1; i<=n; i++)cin>>v[i];
    int odd = 0,even = 0;
    for(int i=1; i<=n; i++) {
        if(i%2)odd -= v[i];
        else odd += v[i];
    }
    even += (v[n]+v[n-1]);
    even -= (v[1]+v[2]);
    for(int i=3; i<=n-2; i++) {
        if(i%2)even += v[i];
        else even -= v[i];
    }
    int pre = 1;
    res[pre] = odd;
    for(int i=3; i<=(n/2); i+=2) {
        odd += 2*(v[n-pre]-v[pre+1]);
        res[i] = odd;
        pre = i;
    }
    pre = 2;
    res[pre] = even;
    for(int i=4; i<=(n/2); i+=2) {
        even += 2*(v[n-pre]-v[pre+1]);
        res[i] = even;
        pre = i;
    }
    for(int i=1; i<=(n/2); i++)cout<<res[i]<<" ";
    cout<<endl;
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
 