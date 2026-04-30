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
int query(int t,int l,int r){
    cout<<t<<" "<<l<<" "<<r<<endl;
    cout.flush();
    int res;cin>>res;
    return res;
}
void print(int l,int r){
    cout<<"! "<<l<<" "<<r<<endl;
    cout.flush();
    return;
}
void solve(int tc) {
    int n;cin>>n;
    int lo = 1,hi = n,LL = -1,RR = -1;
    while(lo<=hi){
        int mid = (lo+hi)/2;
        int org = query(1,1,mid),mod = query(2,1,mid);
        if(org < mod){
            LL = mid;
            hi = mid-1;
        }else lo = mid+1;
    }
    //show(LL);
    int org = query(1,1,n),mod = query(2,1,n);
    RR = LL+(mod-org-1);
    print(LL,RR);
    return;
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
 