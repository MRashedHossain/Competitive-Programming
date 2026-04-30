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
    ll n,ans1 = 0,ans2 = 0,mnr = inf,mnc = inf;cin>>n;
    vector<ll> p,q;
    for (int i=0;i<n;i++){
        ll x;cin>>x;
        p.push_back(x);
        mnr = min(mnr,x);
    }    for (int i=0;i<n;i++){
        ll x;cin>>x;
        q.push_back(x);
        mnc = min(mnc,x);
    }
    for (int i=0;i<n;i++){
        ans1+=(p[i]+mnc);
    }
        for (int i=0;i<n;i++){
        ans2+=(q[i]+mnr);
    }
    return min(ans1,ans2);
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
 