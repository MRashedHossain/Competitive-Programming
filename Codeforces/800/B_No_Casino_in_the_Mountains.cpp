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
    int n,k;cin>>n>>k;
    vector<int> ps(n+2,0);
    for(int i=1;i<=n;i++){
        int x;cin>>x;
        ps[i] = ps[i-1]+x;
    }
    int res = 0,pos = 0;
    while(pos + k <= n){
        if(ps[pos+k] - ps[pos])pos++;
        else {
            res++;
            pos = pos+k+1;
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
 