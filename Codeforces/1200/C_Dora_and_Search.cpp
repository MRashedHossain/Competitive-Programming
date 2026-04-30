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
    vector<int> v(n+2);
    priority_queue<int> lq,rq;
    for(int i=1; i<=n; i++) {
        cin>>v[i];
        lq.push(-v[i]);
        rq.push(v[i]);
    }
    int l = 1,r = n;
    while(l < r) {
        if(v[l] == -lq.top()) {
            lq.pop();
            l++;
        }
        if(v[l] == rq.top()) {
            rq.pop();
            l++;
        }
        if(v[r] == -lq.top()) {
            lq.pop();
            r--;
        }
        if(v[r] == rq.top()) {
            rq.pop();
            r--;
        }
        if(v[l] != -lq.top() && v[l] != rq.top() && v[r] != -lq.top() && v[r] != rq.top()) {
            cout<<l<<" "<<r<<endl;
            return;
        }
    }
    cout<<"-1"<<endl;
    return;
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