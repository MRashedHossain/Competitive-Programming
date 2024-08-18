#include<bits/stdc++.h>
using namespace std;

#define endl "\n"
#define RASHED ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
///#define show(x) cout << #x << " = " << x << endl
#define int long long int

void solve() {
    int n,m,k;
    cin>>n>>m>>k;
    set<int> s[m+7];
    s[0].insert(k);
    for(int i=1; i<=m; i++) {
        int x;
        char c;
        cin>>x>>c;
        for(auto j:s[i-1]) {
            if(c == '0') {
                if(j+x <= n)s[i].insert(j+x);
                else s[i].insert(j+x-n);
            }
            if(c == '1') {
                if(j-x > 0)s[i].insert(j-x);
                else s[i].insert(n+j-x);
            }
            if(c == '?') {
                if(j+x <= n)s[i].insert(j+x);
                else s[i].insert(j+x-n);
                if(j-x > 0)s[i].insert(j-x);
                else s[i].insert(n+j-x);
            }
        }
    }
    cout<<s[m].size()<<endl;
    for(auto i:s[m])cout<<i<<" ";
    cout<<endl;
}
signed main() {
    RASHED
    int TC;
    cin>>TC;
    while(TC--)solve();
    return 0;
}

