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
    int n,m;
    cin>>n>>m;
    int a[n+8][m+8];
    for(int i=1; i<=n; i++) {
        for(int j = 1; j<=m; j++)cin>>a[i][j];
    }
    if(n == 1 && m == 1) {
        cout<<-1<<endl;
        return;
    }
    if(m == 1) {
        int tmp = a[1][1];
        for(int i=1; i<n; i++)a[i][1] = a[i+1][1];
        a[n][1] = tmp;
    } else {
        for(int i=1; i<=n; i++) {
            int tmp = a[i][1];
            for(int j=1; j<m; j++) {
                a[i][j] = a[i][j+1];
            }
            a[i][m] = tmp;
        }
    }
    for(int i=1; i<=n; i++) {
        for(int j=1; j<=m; j++)cout<<a[i][j]<<" ";
        cout<<endl;
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

*/
