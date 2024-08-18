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
    int n;cin>>n;
    int a[n+8],nex_ele[n+8];
    for(int i=1;i<=n;i++)cin>>a[i];
    nex_ele[1] = -1;
    for(int i=2;i<=n;i++){
        if(a[i] != a[i-1])nex_ele[i] = i-1;
        else nex_ele[i] = nex_ele[i-1];
    }
    int q;cin>>q;
    while(q--){
        int l,r;cin>>l>>r;
        if(nex_ele[r] < l)cout<<"-1 -1"<<endl;
        else cout<<nex_ele[r]<<" "<<r<<endl;
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

