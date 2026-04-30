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
int query(int &a,int &b){
    cout<<"? "<<a<<" "<<b<<endl;
    cout.flush();
    int res;cin>>res;return res;
}
void print(int &res){
    cout<<"! "<<res<<endl;
    cout.flush();
}
void solve(int tc) {
    int lo = 2,hi = 999,res = inf,fx = 1LL;
   while(lo <= hi){
        int mid = (lo+hi)/2;
        int curr = query(fx,mid);
        if(mid == curr-1){
            res = min(res,mid);
            hi = mid-1;
        }
        else lo = mid+1;
    }
    print(res);
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
 