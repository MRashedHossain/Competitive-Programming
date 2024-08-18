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

void solve(int tc) {
    int n,m;
    cin>>n>>m;
    string s,t;
    vector<int> v;
    map<int,int> f;
    cin>>s;
    for(int i=0; i<m; i++) {
        int x;
        cin>>x;
        v.push_back(x);
        f[x]++;
    }
    cin>>t;
    sort(v.begin(),v.end());
    sort(t.begin(),t.end());
//    for(auto i:v)cout<<i<<" ";
//    cout<<endl;
//    show(t);
    int lo = 0,hi = m-1;
    for(int i=0; i<m && lo<=hi; ) {
//        show(lo);
//        show(hi);
        s[v[i]-1] = t[lo];
        hi-=(f[v[i]]-1);
        lo++;
        i+=f[v[i]];
    }
    cout<<s<<endl;
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

