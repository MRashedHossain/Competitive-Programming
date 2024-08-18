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

bool solve(int tc) {
    int n;
    cin>>n;
    int a[n+9];
    for(int i=1; i<=n; i++)cin>>a[i];
    int down = 0,up = 0,pre = a[1];
    for(int i=2; i<=n; i++) {
        if(a[i]>=pre) {
            pre = a[i];
            up = i;
        } else break;
    }
    pre = a[1];
    for(int i=2; i<=n; i++) {
        if(a[i] <= pre) {
            pre = a[i];
            down = i;
        } else break;
    }
    show(up);
    show(down);
}
signed main() {
    RASHED
    int TC = 1;
    cin>>TC;
    for(int i=1; i<=TC; i++)cout<<(solve(i)?"Yes":"No")<<endl;
    return 0;
}
/**
CASES:

*/

