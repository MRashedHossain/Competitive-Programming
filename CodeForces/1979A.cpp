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
    int n;
    cin>>n;
    int a[n+8],val =  INT_MAX,res1 = INT_MAX,res2 = INT_MAX;
    for(int i=1; i<=n; i++) {
        cin>>a[i];
        if(a[i] < val)val = a[i];
    }
    a[0] = INT_MAX;
    a[n+1] = INT_MAX;
    for(int i=1; i<n; i++) {
        res1 = min(res1,max(a[i],a[i+1]));
    }
    for(int i=1;i<=n;i++){
        if(a[i] == val)res2 = min(res2,min(a[i-1],a[i+1]));
    }
//    show(res1);
//    show(res2);
    cout<<min(res1,res2)-1<<endl;
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

