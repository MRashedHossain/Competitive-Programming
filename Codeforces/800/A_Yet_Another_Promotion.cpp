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
    int a,b,n,m;cin>>a>>b>>n>>m;
    int cst_a = (m*a),cst_b = b*(m+1),got = m+1,ac = n*a,bc = n*b;
    if(cst_a < cst_b){
        int res = (n/got)*cst_a;
        int resta = (n%got)*a,restb = (n%got)*b;
        res += (min(resta,restb));
        cout<<min(res,min(ac,bc))<<endl;
    }else {
        cout<<min(ac,bc)<<endl;
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