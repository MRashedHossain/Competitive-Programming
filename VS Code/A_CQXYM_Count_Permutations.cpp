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

void solve(int tc) {
    int n;
    cin>>n;
    n = n*2;
    int res = 1;
    for(int i=1; i<=n; i++)res = ((res%M)*(i%M))%M;
    res = (res/2)%M;
    cout<<res<<endl;
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

