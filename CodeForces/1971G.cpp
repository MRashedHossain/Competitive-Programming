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
    int n;
    cin>>n;
    int a[n+8];
    map<int,priority_queue<int>> f;
    for(int i=0; i<n; i++) {
        cin>>a[i];
        f[a[i]>>2].push(-a[i]);
    }
    for(int i=0; i<n; i++) {
        cout<<-(f[a[i]>>2].top())<<" ";
        f[a[i]>>2].pop();
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

