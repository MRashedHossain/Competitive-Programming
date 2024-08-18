#include<bits/stdc++.h>
using namespace std;

#define endl "\n"
#define RASHED ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
///#define show(x) cout << #x << " = " << x << endl
#define int long long int

int solve() {
    int n;
    cin>>n;
    vector<pair<pair<int,int>,pair<int,int>>> v;
    for(int i=0; i<n; i++) {
        vector<pair<int,int>> d;
        for(int j=1; j<=3; j++) {
            int x;
            cin>>x;
            d.push_back({x,j});
        }
        sort(d.begin(),d.end());
        v.push_back({{d[1].first,d[1].second},{d[2].first,d[2].second}});
    }
    int res = 0,pre;
    if(v[0].first.first >= v[0].second.first) {
        res+=v[0].first.first;
        pre = v[0].first.second;
    } else {
        res += v[0].second.first;
        pre = v[0].second.second;
    }
    for(int i=1; i<n; i++) {
        if(pre == v[i].first.second) {
            res += v[i].second.first;
            pre = v[i].second.second;
        } else {
            res+=v[i].first.first;
            pre = v[i].first.second;
        }
    }
    return res;
}
signed main() {
    RASHED
    cout<<solve()<<endl;
    return 0;
}
/**
CASES:

*/

