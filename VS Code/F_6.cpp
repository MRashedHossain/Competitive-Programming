#include<bits/stdc++.h>
using namespace std;

#define endl "\n"
#define RASHED ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
///#define show(x) cout << #x << " = " << x << endl
#define int long long int

void solve() {
    int n,con = 0;cin>>n;
    int a[n+9];
    map<int,int> eat;
    for(int i=1;i<=n;i++)cin>>a[i];
    for(int i=1;i<=n;i++){
        con+=a[i];
        eat[con] = i;
    }
    int pro = 0,res = 0;
    for(int i=n;i>=1;i--){
        pro+=a[i];
        if(eat[pro] && i>eat[pro])res = max(res,n-i+1+eat[pro]);
    }
    cout<<res<<endl;
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
