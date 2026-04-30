#include<bits/stdc++.h>
using namespace std;
 
#define endl "\n"
#define RASHED ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
///#define int long long int
 
void solve() {
    int a,b,p,q,x,y,ans = 0;
    cin>>a>>b>>p>>q;
    vector<pair<int,int>> K,Q;
    map<pair<int,int>,int> m;
    K.push_back({p+a,q+b});
    K.push_back({p+a,q-b});
    K.push_back({p+b,q+a});
    K.push_back({p+b,q-a});
    K.push_back({p-a,q+b});
    K.push_back({p-a,q-b});
    K.push_back({p-b,q+a});
    K.push_back({p-b,q-a});
    cin>>p>>q;
        Q.push_back({p+a,q+b});
    Q.push_back({p+a,q-b});
    Q.push_back({p+b,q+a});
    Q.push_back({p+b,q-a});
    Q.push_back({p-a,q+b});
    Q.push_back({p-a,q-b});
    Q.push_back({p-b,q+a});
    Q.push_back({p-b,q-a});
    for(int i=0; i<8; i++) {
        for(int j=0; j<8; j++) {
            if(Q[i] == K[j] && !m[Q[i]]) {
                ans++;
                m[Q[i]]++;
            }
        }
    }
    cout<<ans<<endl;
}
signed main() {
    RASHED
    int tc;
    cin>>tc;
    while(tc--)solve();
    return 0;
}
 