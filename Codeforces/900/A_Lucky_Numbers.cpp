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
int calcu(int n) {
    int mx = 0,mn = 10;
    while(n) {
        int d = n%10;
        n/=10;
        mx = max(mx,d);
        mn = min(mn,d);
    }
    return (mx-mn);
}
void solve(int tc) {
    int l,r;
    cin>>l>>r;
    int res = 0,val = -1;
        for(int i=l; i<=r; i++) {
            if(calcu(i)>val) {
                val = calcu(i);
                res = i;
                if(val == 9)break;
            }
        }
        cout<<res<<endl;
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
