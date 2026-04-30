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
 
void solve(int tc) {
    int n,x;cin>>n>>x;
    int parbo = 0,r = -inf;
    for(int i=1;i<=n;i++){
        int a,b,c;cin>>a>>b>>c;
        r = max(r,(a*b) - c);
        parbo += ((b-1)*a);
    }
    x -= parbo;
    if(x <= 0)cout<<0<<endl;
    else if(r <= 0)cout<<-1<<endl;
    else {
        int ans = (x+r-1)/r;
        cout<<ans<<endl;
    }
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