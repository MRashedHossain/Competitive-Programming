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
    priority_queue<int> q;
    vector<int> res;
    for(int i=0; i<n; i++) {
        int x;
        cin>>x;
        q.push(x);
    }
    int curr = 0;
    while(!q.empty()) {
        int val = q.top();
        q.pop();
        if(val>=k) {
            res.push_back(k);
            curr+=(val-k);
        } else {
            if(curr>=(k-val)) {
                res.push_back(k);
                curr-=(k-val);
            }
        }
    }
    cout<<res.size()<<endl;
}
signed main() {
    RASHED
    int TC = 1;
    cin>>TC;
    for(int i=1; i<=TC; i++)solve(i);
    return 0;
}
/**

*/

