#include<bits/stdc++.h>
using namespace std;

#define endl "\n"
#define RASHED ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
///#define show(x) cout << #x << " = " << x << endl
#define int long long int

int solve(int tc) {
    int n,k,x;cin>>n>>k>>x;
    if(n < k || k > x+1)return -1;
    int res = (k*(k-1))/2;
    if(x > k)res+=((n-k)*x);
    else res += ((n-k)*(k-1));
    return res;
}
signed main() {
    RASHED
    int TC;
    cin>>TC;
    for(int i=1;i<=TC;i++)cout<<solve(i)<<endl;
    return 0;
}
/**
CASES:

*/

