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
struct pos {
    int x,y;
};
int solve(int tc) {
    int n,m;
    cin>>n>>m;
    int v[n+2][m+2];
    map<int,queue<pos>> f;
    priority_queue<int> q;
    for(int i=1; i<=n; i++) {
        for(int j=1; j<=m; j++) {
            cin>>v[i][j];
            f[v[i][j]].push({i,j});
            q.push(v[i][j]);
        }
    }
    int res = q.top();
    map<int,int> r,c;
    vector<pos> p;
    for(int i=1; i<=n; i++) {
        for(int j=1; j<=m; j++) {
            if(v[i][j] == res) {
                p.push_back({i,j});
                r[i]++;
                c[j]++;
            }
        }
    }
    vector<pair<int,int>> row,col;
    for(auto i:r)row.push_back({i.S,i.F});
    for(auto i:c)col.push_back({i.S,i.F});
    sort(row.rbegin(),row.rend());
    sort(col.rbegin(),col.rend());
    set<int> rr,cc;
    int fr = row.front().S,fc = col.front().S;
//    show(fr);
//    show(fc);
    for(auto i:p) {
        if(i.x != fr)rr.insert(i.y);
        if(i.y != fc)cc.insert(i.x);
    }
//    cout<<"ROW"<<endl;
//    for(auto i:row)cout<<i.S<<" "<<i.F<<endl;
//    cout<<"COL"<<endl;
//    for(auto i:row)cout<<i.S<<" "<<i.F<<endl;
    if(rr.size() <= 1 || cc.size() <= 1)return res-1;
    return res;
}
signed main() {
    RASHED
    int TC = 1;
    cin>>TC;
    for(int i=1; i<=TC; i++)cout<<solve(i)<<endl;
    return 0;
}
/**
CASES:
 
*/