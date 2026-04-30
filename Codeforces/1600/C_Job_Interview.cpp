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
    int n,m;
    cin>>n>>m;
    vector<int> a(n+m+3),b(n+m+3),type(n+m+3),hired(n+m+3);
    int bad = inf;
    for(int i=1; i<=n+m+1; i++)cin>>a[i];
    for(int i=1; i<=n+m+1; i++)cin>>b[i];
    int programmer = n,tester = m,res = 0;
    for(int i=1; i<=n+m+1; i++) {
        if(a[i] > b[i]) {
            if(programmer)programmer--,res += a[i],hired[i] = 1;
            else tester--,res += b[i],hired[i] = 2,bad = min(bad,i);
        } else {
            if(tester)tester--,res += b[i],hired[i] = 2;
            else programmer--,res += a[i],hired[i] = 1,bad = min(bad,i);
        }
    }
    (hired[n+m+1] == 1?res -= a[n+m+1]:res -= b[n+m+1]);
    int lst = res;
//    show(res);
//    show(bad);
    for(int i=1; i<=n+m; i++) {
        if(i<bad && hired[i] != hired[bad]) {
            if(hired[i] == 1)res += (a[bad] - a[i]) + (b[n+m+1] - b[bad]);
            else res += (b[bad] - b[i]) + (a[n+m+1] - a[bad]);
        } else {
            if(hired[i] == 1)res += (a[n+m+1] - a[i]);
            else res += (b[n+m+1] - b[i]);
        }
        cout<<res<<" ";
        res = lst;
    }
    cout<<lst<<endl;
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