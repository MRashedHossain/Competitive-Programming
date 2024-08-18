#include<bits/stdc++.h>
using namespace std;

#define endl "\n"
#define RASHED ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
///#define show(x) cout << #x << " = " << x << endl
#define int long long int

void solve() {
    int n,k,res = 0;
    cin>>n>>k;
    for(int i=1,X = 1; i<=n; i+=k,X++) {
        int N = i+k-1,M = i-1;
        N = (N*(N+1))/2;
        M = (M*(M+1))/2;
        res+=((N-M)*X);
    }
    cout<<res<<endl;
}
signed main() {
    RASHED
    int tc;
    cin>>tc;
    while(tc--)solve();
    return 0;
}

