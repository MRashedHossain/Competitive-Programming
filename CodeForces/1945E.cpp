#include<bits/stdc++.h>
using namespace std;

#define endl "\n"
#define RASHED ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
#define show(x) cout << #x << " = " << x << endl
#define int long long int

void solve() {
    int n,k,pos;cin>>n>>k;
    int a[n+8];
    for(int i=1;i<=n;i++){
        cin>>a[i];
        if(a[i] == k)pos = i;
    }
    int lo = 1,hi = n+1;
    while (hi-lo > 1){
        int mid = (lo+hi)/2;
        if(a[mid] <= k)lo = mid;
        else hi = mid;
    }
    cout<<1<<endl;
    cout<<pos<<" "<<lo<<endl;
}
signed main() {
    RASHED
    int tc;
    cin>>tc;
    while(tc--)solve();
    return 0;
}
///Baal er VS Code
