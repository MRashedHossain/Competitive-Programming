#include<bits/stdc++.h>
using namespace std;
 
#define endl "\n"
#define RASHED ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
#define int long long int
 
void solve() {
    int n;
    cin>>n;
    map<int,int> m;
    map<int,bool> m_f;
    vector<int> v;
    for(int i=0; i<n; i++) {
        int k;
        cin>>k;
        v.push_back(k);
        m[k]++;
        m_f[k] = true;
    }
    int cnt = m[1]+m[2];
    int ans = (cnt*(cnt-1))/2;
    for(auto i:v) {
        if(i == 1 || i == 2)continue;
        if(m[i]>1 && m_f[i]) {
            ans+=(m[i]*(m[i]-1))/2;
            m_f[i] = false;
        }
    }
    cout<<ans<<endl;
}
int32_t main() {
    RASHED
    int tc;
    cin>>tc;
    while(tc--)solve();
    return 0;
}
 