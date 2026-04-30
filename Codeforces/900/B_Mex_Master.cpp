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
    int n;
    cin>>n;
    int zero = 0,one = 0,extra = 0;
    for(int i=0; i<n; i++) {
        int x;
        cin>>x;
        if(x == 0)zero++;
        if(x == 1)one++;
        if(x>1)extra++;
    }
    if(zero <= (n+1)/2) {
        cout<<0<<endl;
        return;
    }
    if(one == 0) {
        cout<<1<<endl;
        return;
    }
    if(one && extra) {
        cout<<1<<endl;
        return;
    }
    if(one && extra == 0) {
        cout<<"2"<<endl;
        return;
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
 