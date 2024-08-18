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
    map<int,priority_queue<int>> f;
    for(int i=1;i<=n;i++){
        int x;cin>>x;
        f[x].push(i);
    }
    cout<<min(f[1].size(),min(f[2].size(),f[3].size()))<<endl;
    while(!f[1].empty() && !f[2].empty() && !f[3].empty()){
        cout<<f[1].top()<<" ";
        f[1].pop();
        cout<<f[2].top()<<" ";
        f[2].pop();
        cout<<f[3].top()<<endl;
        f[3].pop();
    }
}
signed main() {
    RASHED
    int TC = 1;
    ///cin>>TC;
    for(int i=1; i<=TC; i++)solve(i);
    return 0;
}
/**
CASES:

*/

