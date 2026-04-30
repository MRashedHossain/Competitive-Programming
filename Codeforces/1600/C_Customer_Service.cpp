#include<bits/stdc++.h>
using namespace std;
 
#define RASHED ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
#define endl "\n"
#define int long long int
 
#define show(x) cout << #x << " = " << x << endl
#define inf (int)1e17
#define maxn 100010
 
#define F first
#define S second
 
void solve(int tc) {
    int n;cin>>n;
    int a[n+3][n+3];
    for(int i=1;i<=n;i++)for(int j=1;j<=n;j++)cin>>a[i][j];
    multiset<int> ms;
    for(int i=1;i<=n;i++){
        int curr = 0;
        for(int j=n;j>=1;j--){
            if(a[i][j] != 1)break;
            curr++;
        }
        ms.insert(curr);
    }
    int res = 0;
    while(!ms.empty()){
        int now = *(ms.begin());
        ms.erase(ms.begin());
        if(now>=res)res++;
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