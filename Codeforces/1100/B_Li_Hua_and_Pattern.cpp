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
    int n,k;
    cin>>n>>k;
    int a[n+2][n+2];
    for(int i=1; i<=n; i++)for(int j=1; j<=n; j++)cin>>a[i][j];
    int need = 0,change = 0,another = 0;
    for(int i=1,j=n; i<=n; i++,j--) {
        int curr = 0,o = 0,z = 0;
        for(int k=1,l=n; k<=n; k++,l--) {
            (a[i][k] == 1?o++:z++);
            (a[j][l] == 1?o++:z++);
            if(a[i][k] != a[j][l])curr++;
        }
        need += curr;
        if(curr > 0)change += min(o,z);
        another += min(curr,min(o,z));
    }
    need /= 2;
    if(need > k)return false;
    if(n%2)return true;
    return ((k-need) % 2 == 0);
}
signed main() {
    RASHED
    int TC = 1;
    cin>>TC;
    for(int i=1; i<=TC; i++)cout<<(solve(i)?"YES":"NO")<<endl;
    return 0;
}