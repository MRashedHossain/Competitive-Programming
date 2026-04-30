#include<bits/stdc++.h>
using namespace std;
 
#define RASHED ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
#define endl "\n"
#define int long long int
 
#define show(x) cout << #x << " = " << x << endl
#define inf (int)1e17
#define maxn 200010
 
#define F first
#define S second
vector<int> v(maxn),vis(maxn,0);
int DSU(int x,int y,int res){
    if(x == y)return res;
    vis[x]++;
    x = v[x];
    res++;
    return DSU(x,y,res);
}
void solve(int tc) {
    int n;cin>>n;
    int q = n;
    for(int i=1;i<=n;i++)cin>>v[i];
    int res = 0;
    while(q--){
        int pos;cin>>pos;
        if(vis[pos])cout<<res<<" ";
        else {
            res += DSU(v[pos],pos,1);
            cout<<res<<" ";
        }
    }
    cout<<endl;
    for(int i=1;i<=n;i++)v[i] = vis[i] = 0;
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