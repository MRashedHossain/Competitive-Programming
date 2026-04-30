#include<bits/stdc++.h>
using namespace std;
 
#define endl "\n"
#define FAST ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
#define show(x) cout << #x << " : " << x << endl
#define ll long long int
#define maxn 100100
 
void clean() {
 
}
void solve() {
    ll n,a[110],b[110]= {0},ans = 10000000000;
    cin>>n;
    for (int i=1; i<=n; i++) {
        cin>>a[i];
        b[i] = b[i-1]+1;
        if(a[i] == b[i])b[i]++;
    }
    /**
    for (int i = 1; i<=n; i++) {
        ans = min(ans,b[i]);
        cout<<b[i]<<" ";
    }
    cout<<endl;
    */
    cout<<b[n]<<endl;
}
int main() {
    FAST
    int tc;
    cin>>tc;
    while(tc--) {
        solve();
    }
    return 0;
}