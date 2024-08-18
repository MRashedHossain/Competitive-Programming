#include<bits/stdc++.h>
using namespace std;

#define endl "\n"
#define RASHED ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);

#define int long long int
#define show(x) cout << #x << " = " << x << endl
///#define maxn 200100
#define F first
#define S second

int costing(pair<int,int> a,pair<int,int> b) {
    return (abs(a.F-b.F)+abs(a.S-b.S));
}
int solve(int tc) {
    int n,k,a,b;
    cin>>n>>k>>a>>b;
    a--;
    b--;
    vector<pair<int,int>> v;
    for(int i=0; i<n; i++) {
        int x,y;
        cin>>x>>y;
        v.push_back({x,y});
    }
    if(a < k && b < k)return 0;
    if(a < k) {
        int cst = 1e16;
        for(int i=0; i<k; i++) {
            cst = min(cst,costing(v[i],v[b]));
        }
        return min(cst,costing(v[a],v[b]));
    }
    if(b < k) {
        int cst = 1e16;
        for(int i=0; i<k; i++) {
            cst = min(cst,costing(v[i],v[a]));
        }
        return min(cst,costing(v[a],v[b]));
    }
    int cst1 = 1e16,cst2 = 1e16;
    for(int i=0; i<k; i++) {
        int cst = costing(v[i],v[a]);
        cst1 = min(cst1,cst);
    }
    for(int i=0; i<k; i++) {
        int cst = costing(v[i],v[b]);
        cst2 = min(cst2,cst);
    }
//    show(cst1);
//    show(cst2);
//    cout<<costing(v[a],v[b])<<endl;
    return min(cst1+cst2,costing(v[a],v[b]));
}
signed main() {
    RASHED
    int TC;
    cin>>TC;
    for(int i=1; i<=TC; i++)cout<<solve(i)<<endl;
    return 0;
}
/**
CASES:

*/

