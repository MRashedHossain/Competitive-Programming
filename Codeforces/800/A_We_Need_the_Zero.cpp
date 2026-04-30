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
    vector<int> a(n+2);
    for(int i=1; i<=n; i++)cin>>a[i];
    for(int i=0; i<256; i++) {
        vector<int> b(n+2,i);
        int res = 0;
        for(int j=1; j<=n; j++)b[j] ^= a[j];
        for(int j=1;j<=n;j++)res ^= b[j];
        if(res == 0) {
            cout<<i<<endl;
            return;
        }
    }
    cout<<-1<<endl;
    return;
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