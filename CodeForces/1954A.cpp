#include<bits/stdc++.h>
using namespace std;

#define endl "\n"
#define RASHED ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);

///#define int long long int
///#define show(x) cout << #x << " = " << x << endl
///#define maxn 200100

bool solve() {
    int n,m,k;cin>>n>>m>>k;
    int pos = n/m;
    if(n%m)pos++;
    if(n-pos > k)return true;
    return false;
}
signed main() {
    RASHED
    int tc;
    cin>>tc;
    while(tc--)cout<<(solve()?"YES":"NO")<<endl;
    return 0;
}
/**
CASES:

*/
