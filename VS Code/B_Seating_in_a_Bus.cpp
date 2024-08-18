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
    int n;
    cin>>n;
    map<int,int> f;
    int a[n+8];
    for(int i=1;i<=n;i++)cin>>a[i];
    f[a[1]]++;
    for(int i=2; i<=n; i++) {
        if(f[a[i]-1] == 0 && f[a[i]+1] == 0)return false;
        else f[a[i]]++;
    }
    return true;
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

