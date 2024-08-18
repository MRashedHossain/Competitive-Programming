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

bool solve(int tc) {
    int n,m,k;cin>>n>>m>>k;
    int min_edge = n-1,max_edge = (n*(n-1))/2;
    if(m < min_edge || m > max_edge)return false;
    if(n == 1)return k > 1;
    if(m >= min_edge && m < max_edge)return k > 3;
    if(m == max_edge)return k > 2;
}
signed main() {
    RASHED
    int TC = 1;
    cin>>TC;
    for(int i=1; i<=TC; i++)cout<<(solve(i)?"YES":"NO")<<endl;
    return 0;
}
/**
CASES:

*/

