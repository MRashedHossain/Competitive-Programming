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
    int n;cin>>n;vector<int> f(n+2,0);
    for(int i=1;i<=n;i++){
        int x;cin>>x;f[x] = i;
    }
    int pn = f[n],p1 = f[1],p2 = f[2];
    if(p1<p2){
        if(p2<pn)cout<<p2<<" "<<pn<<endl;
        else if(pn>p1 && pn<p2)cout<<pn<<" "<<pn<<endl;
        else cout<<p1<<" "<<pn<<endl;
    }
    else {
        if(p2>pn)cout<<p2<<" "<<pn<<endl;
        else if(pn>p2 && pn<p1)cout<<pn<<" "<<pn<<endl;
        else cout<<p1<<" "<<pn<<endl;
    }
}
signed main() {
    ///RASHED
    int TC = 1;
    cin>>TC;
    for(int i=1; i<=TC; i++)solve(i);
    return 0;
}
/**
CASES:
 
*/