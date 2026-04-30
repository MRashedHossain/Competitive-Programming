#include<bits/stdc++.h>
using namespace std;
 
#define endl "\n"
#define RASHED ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
///#define int long long int
 
void solve() {
 
}
signed main() {
    RASHED
    int n;cin>>n;
    map<int,int> m;
    for(int i=1;i<=n;i++){
        int x;cin>>x;
        m[x] = i;
    }
    for(auto i:m)cout<<i.second<<" ";
    return 0;
}
 