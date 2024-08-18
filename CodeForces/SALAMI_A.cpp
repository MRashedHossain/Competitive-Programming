#include<bits/stdc++.h>
using namespace std;

#define RASHED ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
#define endl "\n"
#define int long long int

#define show(x) cout << #x << " = " << x << endl
#define inf (int)1e14
#define maxn 100010

#define F first
#define S second

void solve(int tc) {
    int n;cin>>n;
    int aa[n+8],ps[n+8] = {0},res = 0;
    for(int i=1;i<=n;i++){
        cin>>aa[i];
        ps[i] = ps[i-1]+aa[i];
    }
//    for(int i=1;i<=n;i++)cout<<ps[i]<<" ";
//    cout<<endl;
    for(int i=1;i<=n;i++){
        int curr = aa[i];
        for(int j=i;j<=n;j++){
            curr = lcm(curr,aa[j]);
//            show(curr);
            if(curr>inf)break;
            if((ps[j]-ps[i-1])%curr == 0)res++;
        }
    }
    cout<<res<<endl;
}
signed main() {
    RASHED
    int TC = 1;
    cin>>TC;
    for(int i=1; i<=TC; i++)solve(i);
    return 0;
}
/**
CASES:

*/

