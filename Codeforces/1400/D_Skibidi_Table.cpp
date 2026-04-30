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
 
pair<int,int> qry(int sz, int need, int fst, int x0, int y0) {
    if (sz == 2) {
        if (need == fst)   return {x0,y0};
        if (need == fst+1) return {x0+1, y0+1};
        if (need == fst+2) return {x0+1,y0};
        return {x0,y0+1};
    }
    int half = sz/2;
    int quad = half*half;
    if (need < fst + quad)return qry(half,need,fst,x0,y0);
    if (need < fst + 2*quad) return qry(half, need, fst + quad, x0+half, y0+half);
    if (need < fst + 3*quad)return qry(half, need, fst + 2*quad, x0+half, y0);
    return qry(half, need, fst + 3*quad, x0, y0+half);
}
int qry(int sz, int fst, int x0, int y0, int x, int y) {
    if (sz == 2) {
        if (x==x0   && y==y0)   return fst;
        if (x==x0+1 && y==y0+1) return fst+1;
        if (x==x0+1 && y==y0)   return fst+2;
        return fst+3;
    }
    int half = sz/2;
    int quad = half*half;
    if (x < x0+half && y < y0+half) return qry(half, fst,x0,y0,x, y);
    if (x >= x0+half && y >= y0+half) return qry(half, fst+quad, x0+half, y0+half, x, y);
    if (x >= x0+half && y <  y0+half) return qry(half, fst+2*quad, x0+half, y0,x, y);
    return qry(half, fst+3*quad, x0,y0+half, x, y);
}
 
void solve(int tc) {
    int n, q;
    cin >> n >> q;
    int side = 1LL << n;
    while (q--) {
        string type;
        cin >> type;
        if (type == "<-") {
            int d;
            cin >> d;
            auto [r, c] = qry(side,d,1,1,1);
            cout << r << " " << c << endl;
        } else {
            int x, y;
            cin >> x >> y;
            int d = qry(side,1,1,1,x,y);
            cout << d << endl;
        }
    }
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