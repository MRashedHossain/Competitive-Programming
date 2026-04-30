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
    int n,l,r;cin>>n>>l>>r;
    int mn = 0,mx = 0;
    mn += (n-l);
    int x = 1;
    for(int i=n-l+1;i<=n;i++,x*=2)mn += x;
    x = 1;
    for(int i=1;i<=r;i++,x*=2)mx += x;
    x/=2;
    mx += (n-r)*x;
    cout<<mn<<" "<<mx<<endl;
}
signed main() {
    RASHED
    int TC = 1;
    //cin>>TC;
    for(int i=1; i<=TC; i++)solve(i);
    return 0;
}
/**
CASES:
 
*/