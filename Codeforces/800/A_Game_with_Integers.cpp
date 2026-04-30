#include<bits/stdc++.h>
using namespace std;
 
#define endl "\n"
#define RASHED ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
///#define int long long int
 
void solve() {
    int n;cin>>n;
    if(n%3)cout<<"First"<<endl;
    else cout<<"Second"<<endl;
}
int32_t main() {
    RASHED
    int tc;
    cin>>tc;
    while(tc--)solve();
    return 0;
}
 