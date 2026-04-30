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
 
vector<vector<int>> sub{{},{2}, {3}, {2, 3}, {5}, {2, 5}, {3, 5}, {2, 3, 5},{7}, {2, 7}, {3, 7}, {2, 3, 7}, {5, 7}, {2, 5, 7},{3, 5, 7}, {2, 3, 5, 7}};
 
void solve(int tc) {
    int l,r;
    cin>>l>>r;
    int ll = 0,rr = 0;
    for(auto i:sub) {
        int gun = 1,has = i.size();
        for(auto j:i) gun *= j;
        if(has%2)ll -= (l-1)/gun;
        else ll += (l-1)/gun;
    }
    for(auto i:sub) {
        int gun = 1,has = i.size();
        for(auto j:i) gun *= j;
        if(has%2)rr -= (r)/gun;
        else rr += (r)/gun;
    }
    cout<< rr - ll << endl;
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
 