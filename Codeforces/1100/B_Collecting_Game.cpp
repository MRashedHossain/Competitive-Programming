#include<bits/stdc++.h>
using namespace std;
 
#define endl "\n"
#define RASHED ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
#define int long long int
#define F first
#define S second
typedef pair<int,int> pii;
 
void solve() {
    int n;
    cin>>n;
    int a[n+8];
    vector<pii> v,pre;
    for(int i=1; i<=n; i++) {
        int x;
        cin>>x;
        a[i] = x;
        v.push_back({x,i});
    }
    sort(v.begin(),v.end());
    ///for(auto i:v)cout<<i.F<<" "<<i.S<<endl;
    for(int i=0; i<n; i++) {
        if(!i) {
            pre.push_back(v[i]);
            continue;
        }
        pre.push_back({pre[i-1].F+v[i].F,v[i].S});
    }
    ///for(auto i:pre)cout<<i.F<<" "<<i.S<<endl;
    int ans[n+8]= {0};
    ans[pre[n-1].S] = n-1;
    for(int i=n-2; i>=0; i--) {
        if(pre[i].F >= a[pre[i+1].S])ans[pre[i].S] = ans[pre[i+1].S];
        else ans[pre[i].S] = i;
    }
    for(int i=1; i<=n; i++)cout<<ans[i]<<" ";
    cout<<endl;
}
signed main() {
    RASHED
    int tc;
    cin>>tc;
    while(tc--)solve();
    return 0;
}
/**
1
5
20 5 1 4 2
1 3
3 5
7 4
12 2
32 1
4 0 0 0 0
*/