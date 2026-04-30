#include<bits/stdc++.h>
using namespace std;
 
#define ll long long int
#define maxn 200100
#define inf 100000000000200
 
 
ll n,m;
vector<pair<ll,ll>> G[maxn];
vector<ll> dis(maxn,inf),path(maxn,inf);
 
void dijkstra(ll src) {
    priority_queue<pair<ll, ll>, vector<pair<ll, ll>>, greater<pair<ll, ll>>> pq;
    pq.push({0,src});
    dis[src] = 0;
    path[src] = 0;
    while(!pq.empty()) {
        pair<ll,ll> u = pq.top();
        pq.pop();
        for (int i=0; i<G[u.second].size(); i++) {
            pair<ll,ll> v = G[u.second][i];
            if (dis[v.second] > dis[u.second]+v.first) {
                dis[v.second] = dis[u.second]+v.first;
                path[v.second] = u.second;
                pq.push(v);
            }
        }
    }
    int v = n;
    stack<ll> res;
    if (path[v] == inf) {
        cout<<-1<<endl;
        return;
    }
    while(v) {
        res.push(v);
        v = path[v];
    }
    while(!res.empty()) {
        cout<<res.top()<<" ";
        res.pop();
    }
    cout<<endl;
}
 
int main() {
    cin>>n>>m;
    for (int i=0; i<m; i++) {
        ll x,y,z;
        cin>>x>>y>>z;
        G[x].push_back({z,y});
        G[y].push_back({z,x});
    }
    dijkstra(1);
}