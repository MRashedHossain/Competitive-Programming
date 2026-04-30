#include<bits/stdc++.h>
using namespace std;
 
#define endl "\n"
#define RASHED ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
#define int long long int
 
void solve() {
 
}
signed main() {
    RASHED
    int n,vas = 0,pet = 0;cin>>n;
    map<int,int> m;
    for(int i=1;i<=n;i++){
        int k;cin>>k;
        m[k] = i;
    }
    int _m;cin>>_m;
    while(_m--){
        int k;cin>>k;
        vas+=m[k];
        pet+=(n-m[k]+1);
    }
    cout<<vas<<" "<<pet<<endl;
    return 0;
}
 