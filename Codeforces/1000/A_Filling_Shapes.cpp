#include<bits/stdc++.h>
using namespace std;
 
#define endl "\n"
#define RASHED ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
#define int long long int
 
void solve() {
 
}
int32_t main() {
    RASHED
    int n;cin>>n;
    if(n%2)cout<<0<<endl;
    else{
        int ans = 1;
        for(int i=0;i<(n/2);i++)ans*=2;
        cout<<ans<<endl;
    }
    return 0;
}
 