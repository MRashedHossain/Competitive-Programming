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
    int n,m;cin>>n>>m;
    int a[n+2][m+2];
    for(int i=1;i<=n;i++)for(int j=1;j<=m;j++)cin>>a[i][j];
    int res = 0;
    for(int i=1;i<=m;i++){
        vector<int> now;
        int sum = 0,pre = 0;
        for(int j=1;j<=n;j++){
            now.push_back(a[j][i]);
            sum+=a[j][i];
        }
        sort(now.begin(),now.end());
        for(int j=0;j<n-1;j++){
            res += sum - (now[j]*(n-j)) - pre;
            pre += now[j];
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
