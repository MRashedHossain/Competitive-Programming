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
 
struct graph {
    int sz,gang;
    vector<int> nodes;
};
 
void solve(int tc) {
    int n;
    cin>>n;
    vector<int> a(n+2);
    map<int,vector<int>> f;
    vector<graph> g;
    for(int i=1; i<=n; i++) {
        cin>>a[i];
        f[a[i]].push_back(i);
    }
    for(auto i:f) {
        int len = f[i.F].size(),gan = i.F;
        vector<int> tmp = i.S;
        g.push_back({len,gan,tmp});
    }
    sort(g.begin(),g.end(),[](graph &a,graph &b) {
        return a.sz>b.sz;
    });
    // for(auto i:g)cout<<i.sz<<" ";
    // cout<<endl;
    if(g.size() == 1) {
        cout<<"NO"<<endl;
        return;
    }
    cout<<"YES"<<endl;
    for(int i=0; i<g.size()-1; i++) {
        vector<int> u = g[i].nodes;
        int v = g[i+1].nodes[0];
        for(auto i:u)cout<<i<<" "<<v<<endl;
    }
    int gs = g.size();
    int v = g[0].nodes[0];
    vector<int> u = g[gs-1].nodes;
    for(int i=1;i<g[gs-1].sz;i++)cout<<g[gs-1].nodes[i]<<" "<<v<<endl;
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
 