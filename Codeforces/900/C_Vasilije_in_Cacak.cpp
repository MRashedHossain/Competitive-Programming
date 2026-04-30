#include<bits/stdc++.h>
using namespace std;
 
#define endl "\n"
#define FAST ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
#define show(x) cout << #x << " : " << x << endl
#define ll long long int
#define maxn 100100
 
void clean() {
 
}
bool solve() {
    ll n,k,x;cin>>n>>k>>x;
    ll lo = (k*(k+1))/2;
    ///ll hi = ((n*(n+1))/2 - lo);
    ll hi = 0;
    for(ll i = n;i>(n-k);i--)hi+=i;
    ///show(hi);
    ///show(lo);
    ///cout<<show(hi)<<" "<<show(lo)<<endl;
    if (x>hi || x<lo)return false;
    return true;
}
int main() {
    FAST
    int tc;
    cin>>tc;
    while(tc--){
        cout<<(solve()?"YES":"NO")<<endl;
    }
    return 0;
}