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
int fst(vector<pair<int,int>> v,vector<int> G[]){
    int n = v.size(),u = v[0].S;
    map<int,int> f;
    for(auto i:G[u])f[i]++;
    for(int i=0;i<n;i++){
        if(f[v[i].S])v[i].F--;
    }
    sort(v.rbegin(),v.rend());
    return (v[0].F+v[1].F-1);
}
int snd(vector<pair<int,int>> v,vector<int> G[]){
    int n = v.size(),u = v[1].S;
    map<int,int> f;
    for(auto i:G[u])f[i]++;
    for(int i=0;i<n;i++){
        if(f[v[i].S])v[i].F--;
    }
    sort(v.rbegin(),v.rend());
    return (v[0].F+v[1].F-1);
}
void solve(int tc) {
    int n;cin>>n;
    vector<int> G[n+4];
    for(int i=0;i<n-1;i++){
        int u,v;cin>>u>>v;
        G[u].push_back(v);
        G[v].push_back(u);
    }
    vector<pair<int,int>> vp;
    for(int i=1;i<=n;i++){
        vp.push_back({G[i].size(),i});
    }
    sort(vp.rbegin(),vp.rend());
    cout<<max(fst(vp,G),snd(vp,G))<<endl;
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
 