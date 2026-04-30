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
int s,e;
map<int,int> par;
 
void dfs(int u,int v){
    par[v] = u;
    if(v > e)return;
    if(v == e){
        par[v] = u;
        return;
    }
    dfs(v,v*2);
    dfs(v,(v*10)+1);
    return;
}
 
void solve(int tc) {
    cin>>s>>e;
    dfs(s,s*2);
    dfs(s,(s*10)+1);
    stack<int> res;
    if(par[e] == 0){
        cout<<"NO"<<endl;
        return;
    }
    cout<<"YES"<<endl;
    res.push(e);
    while(par[e] != s){
        res.push(par[e]);
        e = par[e];
    }
    res.push(s);
    cout<<res.size()<<endl;
    while(!res.empty()){
        cout<<res.top()<<" ";
        res.pop();
    }
    return;
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
 