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
    vector<int> even,odd;
    vector<int> g[n+2],disodd(n+2,inf),diseven(n+2,inf),res(n+2,-1);
    for(int i=1; i<=n; i++) {
        int x;
        cin>>x;
        if(x%2) {
            odd.push_back(i);
            if(i - x >= 1)g[i-x].push_back(i);
            if(i + x <= n)g[i+x].push_back(i);
        } else {
            even.push_back(i);
            if(i - x >= 1)g[i-x].push_back(i);
            if(i + x <= n)g[i+x].push_back(i);
        }
    }
    queue<int> q;
    for(auto i:even) {
        q.push(i);
        disodd[i] = 0;
    }
    while(!q.empty()) {
        int u = q.front();
        q.pop();
        for(auto v:g[u]) {
            if(disodd[v] > disodd[u]+1) {
                disodd[v] = disodd[u]+1;
                q.push(v);
            }
        }
    }
    for(auto i:odd) {
        if(disodd[i] != inf)res[i] = disodd[i];
        q.push(i);
        diseven[i] = 0;
    }
    while(!q.empty()) {
        int u = q.front();
        q.pop();
        for(auto v:g[u]) {
            if(diseven[v] > diseven[u] + 1) {
                diseven[v] = diseven[u] + 1;
                q.push(v);
            }
        }
    }
    for(auto i:even) {
        if(diseven[i] != inf)res[i] = diseven[i];
    }
    for(int i=1; i<=n; i++)cout<<res[i]<<" ";
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
 