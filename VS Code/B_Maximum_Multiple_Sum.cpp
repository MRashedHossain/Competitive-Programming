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
    int n, val = 0,pos = 0;
    cin>>n;
    for(int i=2; i<=n; i++) {
        int tmp = 0,ii = i;
        while(ii <= n) {
            tmp+=ii;
            ii+=i;
        }
        if(tmp > val) {
            val = tmp;
            pos = i;
        }
    }
    cout<<pos<<endl;
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

