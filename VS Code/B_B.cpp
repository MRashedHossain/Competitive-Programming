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
    int n;cin>>n;
    bool res = false;
    map<string,string> f;
    for(int i=1;i<=n;i++){
        string s,t;cin>>s>>t;
        if(f[s] == t)res = true;
        else f[s] = t;
    }
    cout<<(res?"Yes":"No")<<endl;
}
signed main() {
    RASHED
    int TC = 1;
    ///cin>>TC;
    for(int i=1; i<=TC; i++)solve(i);
    return 0;
}
/**
CASES:

*/

