#include<bits/stdc++.h>
using namespace std;
 
#define endl "\n"
#define RASHED ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
///#define int long long int
 
void solve() {
    int n,neg = 0,zero = 0;cin>>n;
    vector<int> v;
    for(int i=0;i<n;i++){
        int x;cin>>x;
        if(x<0)neg++;
        if(x == 0)zero++;
        v.push_back(x);
    }
    if(zero || neg%2){
        cout<<0<<endl;
        return;
    }
    cout<<1<<endl;
    cout<<1<<" "<<0<<endl;
    return;
}
signed main() {
    RASHED
    int tc;
    cin>>tc;
    while(tc--)solve();
    return 0;
}
 