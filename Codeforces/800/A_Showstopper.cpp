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
    int n;cin>>n;
    vector<int> a(n),b(n);
    for(int i=0;i<n;i++)cin>>a[i];
    for(int i=0;i<n;i++)cin>>b[i];
    int amax = 0,bmax = 0;
    for(int i=0;i<n;i++){
        int x = min(a[i],b[i]),y = max(a[i],b[i]);
        a[i] = x;b[i] = y;
        amax = max(amax,a[i]);
        bmax = max(bmax,b[i]);
    }
    return ((a[n-1] == amax) && (b[n-1] == bmax));
}
signed main() {
    RASHED
    int TC = 1;
    cin>>TC;
    for(int i=1; i<=TC; i++)cout<<(solve(i)?"Yes":"No")<<endl;
    return 0;
}
/**
CASES:
 
*/