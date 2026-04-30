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
 
int n,rx,ry,dx,dy;
 
bool check(int mid){
    int lr = max(0LL,rx-mid),rr = min(n,rx+mid),lc = max(0LL,ry-mid),rc = min(n,ry+mid);
    if(lr < dx-mid || rr > dx+mid || lc < dy-mid || rc > dy+mid)return false;
    return true;
}
void solve(int tc) {
    cin>>n>>rx>>ry>>dx>>dy;
    int lo = 0,hi = n,res = 0;
    while(lo <= hi){
        int mid = (lo+hi)/2;
        if(check(mid)){
            res = mid;
            hi = mid-1;
        }else lo = mid+1;
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