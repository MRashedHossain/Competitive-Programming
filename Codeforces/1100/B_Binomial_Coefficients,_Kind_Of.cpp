#include<bits/stdc++.h>
using namespace std;
 
#define RASHED ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
#define endl "\n"
#define int long long int
 
#define show(x) cout << #x << " = " << x << endl
#define inf (int)1e17
#define maxn 100010
 
#define mod 1000000007
 
#define F first
#define S second
int factorial[maxn+8] = {1};
void fac(int n) {
    for(int i=1; i<=n; i++) {
        factorial[i] = (factorial[i-1]*2)%mod;
    }
}
void solve(int tc) {
    int nn;
    cin>>nn;
    vector<int> n(nn),k(nn),res(nn);
    for(int i=0; i<nn; i++)cin>>n[i];
    for(int i=0; i<nn; i++)cin>>k[i];
    for(int i=0; i<nn; i++) {
        cout<<factorial[k[i]]<<endl;
    }
}
signed main() {
    RASHED
    fac(100000);
    ///for(int i=1; i<=10; i++)cout<<factorial[i]<<" ";
    cout<<endl;
    int TC = 1;
    ///cin>>TC;
    for(int i=1; i<=TC; i++)solve(i);
    return 0;
}
/**
CASES:
 
*/
 