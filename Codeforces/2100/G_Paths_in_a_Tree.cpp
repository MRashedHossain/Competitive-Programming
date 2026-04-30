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
 
int query(int a,int b) {
    cout<<"? "<<a<<" "<<b<<endl;
    cout.flush();
    int res;
    cin>>res;
    return res;
}
 
void print(int u) {
    cout<<"! "<<u<<endl;
    cout.flush();
    return;
}
 
void solve(int tc) {
    int n;
    cin>>n;
    vector<int> g[n+2],post,lvl(n+2,inf);
    for(int i=2; i<=n; i++) {
        int u,v;
        cin>>u>>v;
        g[u].push_back(v);
        g[v].push_back(u);
    }
    queue<int> q;
    q.push(1);
    lvl[1] = 0;
    while(!q.empty()) {
        int u = q.front();
        q.pop();
        post.push_back(u);
        for(int v:g[u]) {
            if(lvl[v] > lvl[u] + 1) {
                lvl[v] = lvl[u] + 1;
                q.push(v);
            }
        }
    }
    for(int i=1; i<n; i+=2) {
        int u = post[i-1],v = post[i];
        if(query(u,v)) {
            if(query(u,u)) {
                print(u);
                return;
            } else {
                print(v);
                return;
            }
        }
    }
    print(post.back());
}
signed main() {
    //RASHED
    int TC = 1;
    cin>>TC;
    for(int i=1; i<=TC; i++)solve(i);
    return 0;
}
/**
CASES:
 
*/
 
 