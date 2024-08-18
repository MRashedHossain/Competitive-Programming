#include<bits/stdc++.h>
using namespace std;

#define endl "\n"
#define RASHED ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
///#define show(x) cout << #x << " = " << x << endl
#define int long long int

bool solve() {
    int n;cin>>n;
    int ps[n+9] = {0};
    for(int i=1;i<=n;i++){
        int x;cin>>x;
        ps[i] = ps[i-1]+x;
    }
//    for(int i=1;i<=n;i++)cout<<ps[i]<<" ";
//    cout<<endl;
    for(int i=1;i<=n;i++){
        if(ps[i] == ps[n]-ps[i])return true;
    }
    return false;
}
signed main() {
    RASHED
    int TC;
    cin>>TC;
    while(TC--)cout<<(solve()?"yes":"no")<<endl;
    return 0;
}
/**
CASES:

*/
