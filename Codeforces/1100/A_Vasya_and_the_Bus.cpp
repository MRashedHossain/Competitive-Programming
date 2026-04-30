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
    int a,b;cin>>a>>b;
    if(a<=0 && b>0)cout<<"Impossible"<<endl;
    
    else {
        int res = b-a;
        if(res<=0)res = 0;
        int mn = a+res,mx = a+b-1;
        if(b == 0)mx++;
        cout<<mn<<" "<<mx<<endl;
    }
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