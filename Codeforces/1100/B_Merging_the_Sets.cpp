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
    int n,m;
    cin>>n>>m;
    vector<int> v[n+1],f(m+2,0);
    for(int i=0; i<n; i++) {
        int x;
        cin>>x;
        for(int j=0; j<x; j++) {
            int xx;
            cin>>xx;
            v[i].push_back(xx);
            f[xx]++;
        }
    }
    for(int i=1; i<=m; i++) {
        if(f[i] == 0)return false;
    }
    int res = 0;
    for(int i=0; i<n; i++) {
        bool fnd = true;
        for(auto j:v[i]) {
            if(f[j] == 1) {
                fnd = false;
                break;
            }
        }
        if(fnd)res++;
    }
    return (res>=2);
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