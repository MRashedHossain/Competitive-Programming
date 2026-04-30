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
int query(int l,int r){
    cout<<"? "<<l<<" "<<r<<endl;
    cout.flush();
    int response;cin>>response;
    return response;
}
void out(int l,int r){
    cout<<"! "<<l<<" "<<r<<endl;
    cout.flush();
    return;
}
void solve(int tc) {
    int n,m;
    cin>>n>>m;
    int r1 = query(1,1);
    if(r1>=m && r1 < n){
        int r2 = query(r1+1,1);
        out(r1+1,r2+1);
    }else if(r1 < m && r1 >= n){
        int r2 = query(1,r1+1);
        out(r2+1,r1+1);
    }else {
        int r2 = query(1,r1+1);
        int r3 = query(r1+1,1);
        if(r2 == r1 && r1 == r3)out(r1+1,r1+1);
        else if(r2 < r1)out(r2+1,r1+1);
        else out(r1+1,r3+1);
    }
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