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
    int n,m;cin>>n>>m;
    vector<int> p(1005,0);
    for(int i=1;i<=n;i++){
        int x,y;cin>>x>>y;
        int xx = min(x,y),yy = max(x,y);
        for(int j=xx;j<=yy;j++)p[j]++;
    }
    int l = inf,r = -inf;
    for(int i=0;i<=1000;i++){
        if(p[i] == n){
            l = min(l,i);
            r = max(r,i);
        }
    }
    if(l == inf && r == -inf)cout<<"-1"<<endl;
    else if(m>=l && m <= r) cout<<"0"<<endl;
    else cout<<min(abs(m-l),abs(m-r))<<endl;
}
signed main() {
    RASHED
    int TC = 1;
    //cin>>TC;
    for(int i=1; i<=TC; i++)solve(i);
    return 0;
}
/**
CASES:
 
*/