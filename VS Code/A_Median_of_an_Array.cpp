#include<bits/stdc++.h>
using namespace std;

#define endl "\n"
#define RASHED ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
///#define show(x) cout << #x << " = " << x << endl
#define int long long int

void solve() {
    int n;cin>>n;
    int a[n+9];
    for(int i=1;i<=n;i++)cin>>a[i];
    sort(a+1,a+n+1);
    int mid = (n+1)/2,res = 1,i = mid+1;
    while(a[mid] >= a[i] && i<=n){
        res++;
        i++;
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

