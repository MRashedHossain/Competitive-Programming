#include<bits/stdc++.h>
using namespace std;
 
#define endl "\n"
#define RASHED ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
///#define int long long int
 
int valid(int n){
    for(int i=2;i<=sqrt(n)+1;i++){
        if(n%i == 0)return i;
    }
    return 1;
}
void solve() {
    int n;cin>>n;
    int x = valid(n);
    if(x == 1){
        cout<<1<<" "<<n-1<<endl;
        return;
    }
    cout<<n/x<<" "<<n-(n/x)<<endl;
}
int32_t main() {
    RASHED
    int tc;
    cin>>tc;
    while(tc--)solve();
    return 0;
}