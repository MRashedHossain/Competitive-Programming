#include<bits/stdc++.h>
using namespace std;

#define endl "\n"
#define RASHED ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
///#define show(x) cout << #x << " = " << x << endl
///#define int long long int

void solve() {
    int a,b,c;cin>>a>>b>>c;
    if(a < b && b <  c)cout<<"STAIR"<<endl;
    else if(a < b && b > c)cout<<"PEAK"<<endl;
    else cout<<"NONE"<<endl;
}
signed main() {
    RASHED
    int TC;
    cin>>TC;
    while(TC--)solve();
    return 0;
}
/**
CASES:

*/

