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
    priority_queue<int> o,e;
    for(int i=1;i<=n;i++){
        int x;cin>>x;
        (x%2?o.push(x):e.push(x));
    }
    if(e.empty())cout<<o.top()<<endl;
    else if(o.empty())cout<<e.top()<<endl;
    else {
        int res = o.top();
        o.pop();
        while(!o.empty() && !e.empty() && o.top() != 1){
            int u = e.top(),v = o.top();e.pop();o.pop();
            int l = u+v-1,r = 1;
            e.push(l);o.push(r);
        }
        while(!e.empty()){
            res += e.top();
            e.pop();
        }
        cout<<res<<endl;
    }
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