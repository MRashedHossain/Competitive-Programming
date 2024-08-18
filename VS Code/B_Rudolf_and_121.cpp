#include<bits/stdc++.h>
using namespace std;

#define endl "\n"
#define RASHED ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
///#define show(x) cout << #x << " = " << x << endl
#define int long long int

bool solve() {
    int n;
    cin>>n;
    int a[n+7];
    for(int i=1; i<=n; i++)cin>>a[i];
    for(int i=2; i<n; i++) {
        if(a[i]<0 || a[i-1]<0)continue;
        a[i] -= (a[i-1]*2);
        a[i+1] -= a[i-1];
        a[i-1] = 0;
    }
    for(int i=1; i<=n; i++) {
        if(a[i] != 0)return false;
    }
    return true;
}
signed main() {
    RASHED
    int tc;
    cin>>tc;
    while(tc--)cout<<(solve()?"YES":"NO")<<endl;
    return 0;
}
