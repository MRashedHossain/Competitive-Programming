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
    int n,ans = 9999999;
    cin>>n;
    for (int i=0; i<n; i++) {
        int x,y;
        cin>>x>>y;
        ans = min(ans,(x+(y-1)/2));
    }
    cout<<ans<<endl;
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
 