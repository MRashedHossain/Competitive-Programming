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
    int n;
    cin>>n;
    set<int> s;
    for(int i=1; i*i<=n; i++) {
        if(n%i == 0) {
            s.insert(i);
            s.insert(n/i);
        }
    }
    int x = 0,y = 0,res = inf,lst = maxn;
    for(auto i:s) {
            if(i == n)continue;
        int xx = i,yy = n-i,lc = lcm(xx,yy);
        if(res > lc) {
            res = lc;
            x = xx;
            y = yy;
        }
    }
    if(x>y)swap(x,y);
    cout<<x<<" "<<y<<endl;
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
 