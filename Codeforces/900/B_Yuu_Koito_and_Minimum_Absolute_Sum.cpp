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
    vector<int> v(n+2);
    for(int i=1; i<=n; i++)cin>>v[i];
    if(v[n] > -1 && v[1] > -1) {
        for(int i=1; i<=n; i++) {
            if(v[i] == -1)v[i] = 0;
        }
    } else if(v[n] == -1 && v[1] == -1) {
        v[n] = 0;
        v[1] = 0;
        for(int i=1; i<=n; i++) {
            if(v[i] == -1)v[i] = 0;
        }
    } else {
        int val = max(v[n],v[1]);
        v[n] = val;
        v[1] = val;
        for(int i=1; i<=n; i++) {
            if(v[i] == -1)v[i] = 0;
        }
    }
    cout<<abs(v[n] - v[1])<<endl;
    for(int i=1; i<=n; i++)cout<<v[i]<<" ";
    cout<<endl;
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
 