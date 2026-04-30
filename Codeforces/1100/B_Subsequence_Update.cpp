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
    int n,l,r;cin>>n>>l>>r;
    vector<int> v(n+4,0);
    for(int i=1;i<=n;i++)cin>>v[i];
    priority_queue<int> lq,rq;
    for(int i=1;i<=r;i++)rq.push(-v[i]);
    for(int i=l;i<=n;i++)lq.push(-v[i]);
    int res1 = 0,res2 = 0;
    for(int i=1;i<=(r-l+1);i++)res1+=(-rq.top()),rq.pop();
    for(int i=1;i<=(r-l+1);i++)res2+=(-lq.top()),lq.pop();
    cout<<min(res1,res2)<<endl;
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
 