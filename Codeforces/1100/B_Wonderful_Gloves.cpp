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
    int n,k;
    cin>>n>>k;
    vector<int> l(n),r(n),mn(n),mx(n);
    for(int i=0; i<n; i++)cin>>l[i];
    for(int i=0; i<n; i++)cin>>r[i];
    int curr = 0,pre = 0;
    for(int i=0; i<n; i++){
        mx[i] = max(l[i],r[i]);
        mn[i] = min(l[i],r[i]);
        pre += mx[i];
    }
    sort(mn.rbegin(),mn.rend());
    for(int i=0;i<k-1;i++)curr+=mn[i];
    cout<<curr+pre+1<<endl;
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