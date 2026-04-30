#include<bits/stdc++.h>
using namespace std;
 
#define endl "\n"
#define RASHED ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
///#define int long long int
#define maxn 200008
 
void solve() {
    int n,a[maxn]= {0},b[maxn]= {0},ans = -1000007;
    cin>>n;
    for(int i=1; i<=n; i++) {
        cin>>a[i];
        b[i] = abs(a[i])%2;
        ans = max(ans,a[i]);
    }
    vector<pair<int,int>> v;
    int _i = 1;
    for(int i=1; i<n; i++) {
        if(b[i] == b[i+1]) {
            v.push_back({_i,i});
            _i = i+1;
        }
    }
    v.push_back({_i,n});
    for(auto _i:v) {
        int flag = -100000007,sum = 0;
        for(int i=_i.first; i<=_i.second; i++) {
            sum+=a[i];
            if(sum>flag)flag = sum;
            if(sum<0)sum = 0;
        }
        ans = max(ans,flag);
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
/**
1
6
-1 4 -1 0 5 -4
 
1
4
-1 2 4 -3
*/