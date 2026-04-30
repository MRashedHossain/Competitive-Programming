#include<bits/stdc++.h>
using namespace std;
 
#define endl "\n"
#define FAST ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
#define show(x) cout << #x << " : " << x << endl
#define ll long long int
#define maxn 100100
 
 
 
void solve() {
    ll n,k,ans=0,pos = -1;
    string s;
    vector<ll> v;
    cin>>n>>k>>s;
    for (int i=0; i<n; i++) {
        if(s[i] == 'B') {
            if(i>pos) {
                ans++;
                pos=(i+k-1);
            }
        }
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
 