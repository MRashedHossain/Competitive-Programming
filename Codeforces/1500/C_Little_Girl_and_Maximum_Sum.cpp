#include<bits/stdc++.h>
using namespace std;
 
#define RASHED ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
#define endl "\n"
#define int long long int
 
#define show(x) cout << #x << " = " << x << endl
#define inf (int)1e17
#define maxn 100010
 
#define all(x) (x).begin(), (x).end()
#define rall(x) (x).rbegin(), (x).rend()
#define sz(x) ((int)(x).size())
 
#define F first
#define S second
 
void dbg(priority_queue<pair<int,int>> pq) {
    while(!pq.empty()) {
        cout<<pq.top().F<<" "<<pq.top().S<<endl;
        pq.pop();
    }
}
 
void solve(int tc) {
    int n,q;
    cin>>n>>q;
    vector<int> v(n);
    priority_queue<int> val;
    priority_queue<pair<int,int>> pos;
    for(int &i:v) {
        cin>>i;
        val.push(i);
    }
    vector<pair<int,int>> qry;
    vector<int> ps(n+2,0),con(n+2,0);
    while(q--) {
        int l,r;
        cin>>l>>r;
        qry.push_back({l,r});
        ps[l]++;
        ps[r+1]--;
    }
    for(int i=1; i<=n; i++)ps[i] += ps[i-1];
//    for(int i=1;i<=n;i++)cout<<ps[i]<<" ";
//    cout<<endl;
    for(int i=1; i<=n; i++) {
        pos.push({ps[i],i});
    }
//    dbg(pos);
    while(!val.empty()) {
        auto uu = pos.top();
        auto vv = val.top();
        pos.pop();
        val.pop();
        con[uu.S] = vv;
    }
    int ans = 0;
    for(int i=1; i<=n; i++)con[i] += con[i-1];
    for(auto [l,r]:qry) {
        ans += (con[r] - con[l-1]);
    }
    cout<<ans<<endl;
}
signed main() {
    RASHED
    int TC = 1;
    //cin>>TC;
    for(int i=1; i<=TC; i++)solve(i);
    return 0;
}
/**
CASES:
 
*/
 
 