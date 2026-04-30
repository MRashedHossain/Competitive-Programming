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
    int a[n+2][m+2],res[n+2][m+2];
    string s;
    cin>>s;
    for(int i=1; i<=n; i++)for(int j=1; j<=m; j++){cin>>a[i][j];res[i][j] = a[i][j];}
    vector<int> rowf(n+2,0),colf(m+2,0),rowsum(n+2,0),colsum(m+2,0);
    int x = 1,y = 1,sz = s.size(),zero = 0;
    rowf[x]++;
    colf[y]++;
    for(int i=0; i<sz; i++) {
        if(s[i] == 'D')x++;
        else y++;
        rowf[x]++;
        colf[y]++;
    }
    for(int i=1; i<=n; i++) {
        int curr = 0;
        for(int j=1; j<=m; j++)curr+=a[i][j];
        rowsum[i] = curr;
    }
    for(int i=1; i<=m; i++) {
        int curr = 0;
        for(int j=1; j<=n; j++)curr+=a[j][i];
        colsum[i] = curr;
    }
//    for(int i=1;i<=n;i++)cout<<rowf[i]<<" ";
//    cout<<endl;
//    cout<<endl;
//    for(int i=1;i<=m;i++)cout<<colf[i]<<" ";
//    cout<<endl;
//    cout<<endl;
//    for(int i=1;i<=n;i++)cout<<rowsum[i]<<" ";
//    cout<<endl;
//    cout<<endl;
//    for(int i=1;i<=m;i++)cout<<colsum[i]<<" ";
//    cout<<endl;
//    cout<<endl;
    x = 1,y = 1;
    for(int i=0;i<sz;i++){
        int need;
        if(rowf[x] == 1)need = zero - rowsum[x];
        else need = zero - colsum[y];
        rowf[x]--;
        colf[y]--;
        res[x][y] = need;
        rowsum[x] += need;
        colsum[y] += need;
        if(s[i] == 'D')x++;
        else y++;
    }
    res[n][m] = zero - rowsum[n];
//    for(int i=1;i<=n;i++){
//        for(int j=1;j<=m;j++)cout<<a[i][j]<<"   ";
//        cout<<endl;
//    }
//    cout<<endl;
    for(int i=1;i<=n;i++){
        for(int j=1;j<=m;j++)cout<<res[i][j]<<" ";
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