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
    vector<int> a(n),b(m);
    for(int i=0;i<n;i++)cin>>a[i];
    for(int i=0;i<m;i++)cin>>b[i];
    sort(a.rbegin(),a.rend());
    sort(b.begin(),b.end());
    int dis = 0,pos = 0,tot = 0;
    for(int i=0;i<n && pos < m;){
        if(i+b[pos]-1 < n)dis += a[i+b[pos]-1];
        i += b[pos];
        pos++;
    }
    for(int i=0;i<n;i++)tot += a[i];
    cout<<tot - dis<<endl;
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
 