#include<bits/stdc++.h>
using namespace std;
 
#define endl "\n"
#define RASHED ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
#define ll long long int
#define inf 99999999999999999
#define F first
#define S second
///#define show(x) cout << #x << " : " << x << endl
#define maxn 100100
 
ll add[35]= {1};
void extra() {
    for (int i=1; i<=30; i++)add[i]=(add[i-1]*2);
    ///for (int i=0;i<=30;i++)cout<<add[i]<<" ";
    ///cout<<endl;
}
void solve() {
    ll n,_q,chk = -1;
    cin>>n>>_q;
    vector<ll> v[maxn],q;
    map<ll,ll> m;
    for (int i=0; i<n; i++) {
        ll x;
        cin>>x;
        v[i].push_back(x);
    }
    for (int i=0; i<n; i++) {
        for(ll j=1; j<=30; j++) {
            if ((v[i][0]%add[j]) == 0) {
                v[i].push_back(j);
                chk = max(chk,j);
            }
        }
    }
    ll mn = inf;
    for (int i=0; i<_q; i++) {
        ll x;
        cin>>x;
        if(x<mn) {
            m[x]++;
            mn = x;
        }
    }
 
 
    /**
    for (auto i:m)cout<<i.F<<" : "<<i.S<<endl;
    for (int i=0;i<n;i++){
    cout<<v[i][0]<<" : ";
    for (int j=1;j<v[i].size();j++)cout<<v[i][j]<<" ";
    cout<<endl;
    }
    */
 
    for (int i=0; i<n; i++) {
        for (int j=1; j<v[i].size(); j++) {
            if (m[v[i][j]]) {
                v[i][0]+=(m[v[i][j]]*add[v[i][j]-1]);
                ///m[v[i][j]] = 0;
            }
        }
    }
 
    for (int i=0; i<n; i++)cout<<v[i][0]<<" ";
    cout<<endl;
}
int main() {
    RASHED
    extra();
    int tc;
    cin>>tc;
    while(tc--) {
        solve();
    }
    return 0;
}
/**
1
5 4
2 2 2 2 2
1 1 1 1
1
5 5
1 2 4 8 16
5 2 3 4 1
*/