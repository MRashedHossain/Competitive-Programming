#include<bits/stdc++.h>
using namespace std;
 
#define endl "\n"
#define RASHED ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
///#define ll long long int
///#define inf 99999999999999999
///#define F first
///#define S second
///#define show(x) cout << #x << " : " << x << endl
///#define maxn 200100
 
void solve() {
    int x,y,k,ans;cin>>x>>y>>k;
    if (abs(x-y) <= k){
       ans = min(y+abs(x-y),max(x,y));
    }
    else {
       if(x<y){
        x+=k;
        ans = x+abs(x-y);
       }
       ans = y+abs(x-y);
    }
    cout<<ans<<endl;
}
int main() {
    RASHED
    int tc;
    cin>>tc;
    while(tc--) {
        solve();
    }
    return 0;
}
 