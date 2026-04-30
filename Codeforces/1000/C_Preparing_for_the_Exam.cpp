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
    int n,m,k;cin>>n>>m>>k;
    vector<int> qsn(m+4);
    map<int,int> f;
    for(int i=1;i<=m;i++)cin>>qsn[i];
    for(int i=1;i<=k;i++){
        int x;cin>>x;f[x]++;
    }
    for(int i=1;i<=m;i++){
        if((f[qsn[i]] == 0 && k == n-1) || k == n)cout<<"1";
        else cout<<"0";
    }
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
 