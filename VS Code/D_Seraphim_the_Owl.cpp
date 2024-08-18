#include<bits/stdc++.h>
using namespace std;

#define endl "\n"
#define RASHED ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
#define show(x) cout << #x << " = " << x << endl
#define int long long int

int solve() {
    int n,m;
    cin>>n>>m;
    int A[n+4],B[n+4];
    for(int i=1; i<=n; i++) cin>>A[i];
    for(int i=1; i<=n; i++) cin>>B[i];
    int tmp = 0,res = LLONG_MAX;
    for(int i = m+1; i<=n; i++) {
        tmp += min(A[i],B[i]);
    }
    for(int i=m; i>=1; i--) {
        res = min(res,tmp+A[i]);
        tmp += B[i];
    }
    return res;
}
signed main() {
    RASHED
    int tc;
    cin>>tc;
    while(tc--)cout<<solve()<<endl;
    return 0;
}
/**
CASES:
1
7 2
3 4 2 3 3 2 4
2 4 1 3 4 4 2

1
4 2
7 3 6 9
4 3 8 5

1
6 2
6 9 7 1 8 3
5 8 8 1 4 1
*/
