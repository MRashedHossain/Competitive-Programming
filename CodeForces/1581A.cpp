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

#define M 1000000007
int f[maxn] = {0,1};
void factorial(int n){
    for(int i=2;i<=n;i++)f[i] = ((f[i-1]%M)*(i%M))%M;
}
void solve(int tc) {
    int n;cin>>n;cout<<f[n*2]/2<<endl;
}
signed main() {
    RASHED
    factorial(100002);
    int TC = 1;
    cin>>TC;
    for(int i=1; i<=TC; i++)solve(i);
    return 0;
}
/**
CASES:

*/

