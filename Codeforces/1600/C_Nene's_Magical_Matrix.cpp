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
    int n;cin>>n;
    int g[n+2][n+2],res = 0;
    for(int i=n;i>=1;i--){
        for(int j=1;j<=n;j++)g[i][j] = j;
        for(int j=1;j<=n;j++)g[j][i] = j;
    }
//    for(int i=1;i<=n;i++){
//        for(int j=1;j<=n;j++)cout<<g[i][j]<<" ";
//        cout<<endl;
//    }
    for(int i=1;i<=n;i++)for(int j=1;j<=n;j++)res+=(g[i][j]);
    cout<<res<<" "<<2*n<<endl;
    for(int i=n;i>=1;i--){
        cout<<1<<" "<<i<<" ";for(int i=1;i<=n;i++)cout<<i<<" ";
        cout<<endl;
        cout<<2<<" "<<i<<" ";for(int i=1;i<=n;i++)cout<<i<<" ";
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
CASES:
 
*/