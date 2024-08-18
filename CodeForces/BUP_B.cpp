#include<bits/stdc++.h>
using namespace std;

#define endl "\n"
#define RASHED ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
///#define show(x) cout << #x << " = " << x << endl
#define int long long int

void solve() {
    int n;
    cin>>n;
    vector<pair<int,int>> v[5];
    for(int i=1; i<=3; i++) {
        for(int j=1; j<=n; j++) {
            int x;
            cin>>x;
            v[i].push_back({x,j});
        }
    }
    int res = 0;
    sort(v[1].rbegin(),v[1].rend());
    sort(v[2].rbegin(),v[2].rend());
    sort(v[3].rbegin(),v[3].rend());
    for(int i=0; i<3; i++) {
        for(int j=0; j<3; j++) {
            for(int k=0; k<3; k++) {
                set<int> ck;
                ck.insert(v[1][i].second);
                ck.insert(v[2][j].second);
                ck.insert(v[3][k].second);
                if(ck.size() == 3)res = max(res,v[1][i].first+v[2][j].first+v[3][k].first);
            }
        }
    }
    cout<<res<<endl;
}
signed main() {
    RASHED
    int TC;
    cin>>TC;
    while(TC--)solve();
    return 0;
}
/**
CASES:

*/

