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
    int h,n,res = 1;
    cin>>h>>n;
    vector<int> a,c;
    vector<pair<int,pair<int,int>>> v;
    for(int i=0; i<n; i++) {
        int x;
        cin>>x;
        a.push_back(x);
    }
    for(int i=0; i<n; i++) {
        int x;
        cin>>x;
        c.push_back(x);
    }
    for(int i=0; i<n; i++)v.push_back({1,{c[i],a[i]}});
    priority_queue<pair<int,pair<int,int>>,vector<pair<int,pair<int,int>>>,greater<pair<int,pair<int,int>>>> q;
    for(int i=0; i<n; i++) {
        h-=(v[i].S.S);
        v[i].F+=(v[i].S.F);
        q.push(v[i]);
    }
    while(h>0) {
        vector<pair<int,pair<int,int>>> tmp;
        pair<int,pair<int,int>> curr = q.top();
        tmp.push_back(curr);
        q.pop();
        while(curr.F == q.top().F && !q.empty()){
            tmp.push_back(q.top());
            q.pop();
        }
        for(int i=0;i<tmp.size();i++){
            h-=(tmp[i].S.S);
            tmp[i].F+=tmp[i].S.F;
            q.push(tmp[i]);
        }
        res = curr.F;
    }
    cout<<res<<endl;
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
