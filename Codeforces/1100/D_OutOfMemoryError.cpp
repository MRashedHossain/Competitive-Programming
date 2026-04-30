#include<bits/stdc++.h>
using namespace std;
 
#define RASHED ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
#define endl "\n"
#define int long long int
 
#define show(x) cout << #x << " = " << x << endl
#define inf (int)1e17
#define maxn 100010
 
#define all(x) (x).begin(), (x).end()
#define rall(x) (x).rbegin(), (x).rend()
#define sz(x) ((int)(x).size())
 
#define F first
#define S second
 
void solve(int tc) {
    int n,m,h;
    cin>>n>>m>>h;
    vector<int> a(n+2),mod(n+2),last_change(n+2,0);
    for(int i=1; i<=n; i++) {
        cin>>a[i];
        mod[i] = a[i];
    }
    int reset = -inf;
    for(int ii=1; ii<=m; ii++) {
        int pos,val;
        cin>>pos>>val;
        if(reset > last_change[pos]) {
            mod[pos] = a[pos]+val;
            if(mod[pos] > h) {
                mod[pos] = a[pos];
                reset = ii;
            }
        } else {
            mod[pos] += val;
            if(mod[pos] > h) {
                mod[pos] = a[pos];
                reset = ii;
            }
        }
        last_change[pos] = ii;
    }
    for(int i=1;i<=n;i++){
        if(last_change[i] < reset)mod[i] = a[i];
    }
    for(int i=1;i<=n;i++)cout<<mod[i]<<" ";
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
 
 