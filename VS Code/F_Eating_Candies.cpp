#include<bits/stdc++.h>
using namespace std;

#define endl "\n"
#define RASHED ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
///#define show(x) cout << #x << " = " << x << endl
#define int long long int

int solve() {
    int n;cin>>n;
    int a[n+9];
    map<int,int> eat;
    for(int i=1;i<=n;i++)cin>>a[i];
    int res = 0,alice = 0,bob = 0;
    for(int i=1;i<=n;i++){
        alice += a[i];
        eat[alice] = i;
    }
    for(int i=n;i>=1;i--){
        bob += a[i];
        if(eat[bob] && i>eat[bob])res = max(res,n-i+1+eat[bob]);
    }
    return res;
}
signed main() {
    RASHED
    int TC;
    cin>>TC;
    while(TC--)cout<<solve()<<endl;
    return 0;
}
/**
CASES:

*/

