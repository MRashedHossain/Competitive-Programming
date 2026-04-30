#include<bits/stdc++.h>
using namespace std;
 
#define endl "\n"
#define RASHED ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
#define ll long long int
#define inf 99999999999999999
///#define F first
///#define S second
///#define show(x) cout << #x << " : " << x << endl
///#define maxn 200100
 
void clean() {
 
}
 
ll solve() {
    ll m,k,a1,ak,ans = inf;
    cin>>m>>k>>a1>>ak;
    ll hi = m+1,lo = 0;
    ll _k = m/k;
    ll _1 = m%k;
    ll fancy_1 = max(0LL,_1-a1);
    ll got_1 = max(0LL,a1-_1);
    ll fancy_k = max(0LL,_k-ak);
    ll change = min(got_1/k,fancy_k);
    return fancy_1+fancy_k-change;
}
int main() {
    RASHED
    int tc;
    cin>>tc;
    while(tc--) {
        cout<<solve()<<endl;
    }
    return 0;
}
 