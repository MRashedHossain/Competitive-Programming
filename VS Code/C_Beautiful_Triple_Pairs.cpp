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
    int a[n+8];
    for(int i=1;i<=n;i++)cin>>a[i];
    map<pair<int,pair<int,int>>,int> f;
    map<pair<pair<int,int>,int>,int> t;
    for(int i=1;i<=n-2;i++){
        f[{1,{a[i+1],a[i+2]}}]++;
        f[{2,{a[i],a[i+2]}}]++;
        f[{3,{a[i],a[i+1]}}]++;
        t[{{a[i],a[i+1]},a[i+2]}]++;
    }
    int res = 0;
    for(int i=1;i<=n-2;i++){
        res+=f[{1,{a[i+1],a[i+2]}}];
        res+=f[{2,{a[i],a[i+2]}}];
        res+=f[{3,{a[i],a[i+1]}}];
        res-=(t[{{a[i],a[i+1]},a[i+2]}]*3);
    }
    cout<<res/2<<endl;
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

