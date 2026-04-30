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
    ll n,ans = 1;
    cin>>n;
    vector<ll> v;
    for (int i=0;i<n;i++){
        int x;cin>>x;
        v.push_back(x);
    }
    sort(v.begin(),v.end());
    v[0]+=1;
    for(int i=0;i<n;i++)ans*=v[i];
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
 