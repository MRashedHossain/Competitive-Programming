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
    int l,r;
    cin>>l>>r;
    int n = (r-l+1),tot = 0;
    vector<int> res(n,-1);
    int ll = l,rr = r;
    while(ll <= rr) {
        if(ll == 0 && rr == 0) {
            if (res[0] == -1) res[0] = 0;
            break;
        }
        int p = 1 << (31 - __builtin_clz(rr));
        int msk = 2*p-1;
        for(int i=p;i<=rr;i++){
            int x = i-l;
            if(res[x] != -1)continue;
            int y = msk-i;
            int yy = y-l;
            res[x] = y;
            res[yy] = i;
            tot += 2*msk;
        }
        rr = p-1;
    }
    cout<<tot<<endl;
    for(int i=l; i<=r; i++)cout<<res[i-ll]<<" ";
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
 