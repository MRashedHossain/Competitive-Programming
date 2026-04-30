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
    int n,m,q;cin>>n>>m>>q;
    vector<int> v(n+2);
    for(int i=1;i<=n;i++)cin>>v[i];
    int qry[m+2][3];
    for(int i=1;i<=m;i++)cin>>qry[i][0]>>qry[i][1]>>qry[i][2];
    vector<int> qq(m+2,0);
    for(int i=1;i<=q;i++){
        int l,r;cin>>l>>r;
        qq[l]++;
        qq[r+1]--;
    }
    vector<int> add(n+2,0);
    for(int i=1;i<=m;i++)qq[i] += qq[i-1];
    //for(int i=1;i<=m;i++)cout<<qq[i]<<" ";
    //cout<<endl;
    for(int i=1;i<=m;i++){
        int l = qry[i][0],r = qry[i][1],x = qry[i][2] * qq[i];
        add[l]+=x;
        add[r+1]-=x;
    }
    for(int i=1;i<=n;i++)add[i]+=add[i-1];
    for(int i=1;i<=n;i++)cout<<add[i]+v[i]<<" ";
    cout<<endl;
}
signed main() {
    RASHED
    int TC = 1;
    //cin>>TC;
    for(int i=1; i<=TC; i++)solve(i);
    return 0;
}
/**
CASES:
 
*/
 