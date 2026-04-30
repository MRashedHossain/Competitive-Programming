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
    int n;cin>>n;
    set<int> s;
    map<int,int> f;
    vector<int> v(n+1);
    for(int i=0;i<=n;i++)s.insert(i);
    for(int i=0;i<n;i++){
        cin>>v[i];
        f[v[i]]++;
        s.erase(v[i]);
    }
    int mex = *(s.begin());
    map<int,vector<int>> ff;
    for(auto i:f)ff[i.S].push_back(i.F);
    set<int> res;
    res.insert(mex);
    for(int i=0;i<=n;i++){
        res.erase(n-i+1);
        for(auto ii:ff[i])if(ii <= min(mex,n-i))res.insert(ii);
        cout<<res.size()<<" ";
    }
    cout<<endl;
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
 