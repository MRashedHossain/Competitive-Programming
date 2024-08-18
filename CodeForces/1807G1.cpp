#include<bits/stdc++.h>
using namespace std;

#define endl "\n"
#define RASHED ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);

#define int long long int
///#define show(x) cout << #x << " = " << x << endl
///#define maxn 200100

bool solve() {
    int n;
    cin>>n;
    int a[n+4],pf[n+3] = {0};
    for(int i=1; i<=n; i++)cin>>a[i];
    sort(a+1,a+n+1);
    if(a[1] != 1)return false;
    for(int i=1; i<=n; i++)pf[i] = pf[i-1]+a[i];
    for(int i=1;i<=n;i++)cout<<pf[i]<<" ";
    cout<<endl;
    for(int i=n; i>1; i--) {
        if(pf[i]>pf[i-1])return false;
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
/**
CASES:

*/

