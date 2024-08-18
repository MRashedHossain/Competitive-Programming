#include<bits/stdc++.h>
using namespace std;

#define endl "\n"
#define RASHED ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);

#define int long long int
///#define show(x) cout << #x << " = " << x << endl
///#define maxn 200100

bool solve() {
    int n,a,b,fs = LLONG_MAX;
    cin>>n>>a>>b;
    map<int,int> f;
    for(int i=1; i<=(n*n); i++) {
        int x;
        cin>>x;
        fs = min(fs,x);
        f[x]++;
    }
    int pre = fs;
    for(int i=1; i<=n; i++) {
        for(int j=0; j<n; j++) {
            if(f[pre+(j*a)])f[pre+(j*a)]--;
            else return false;
        }
        pre += b;
    }
    return true;
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
