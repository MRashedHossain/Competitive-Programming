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
    vector<int> v(n),res(n);
    for(int i=0; i<n; i++)cin>>v[i];
    int gc = 0;
    for(int i=0; i<n; i++) {
        int gc = v[i],now = (i == n-1?v[n-2]:v[n-1]);
        for(int j=0; j<n; j++) {
            if(j == i)continue;
            now = __gcd(now,v[j]);
        }
        if(gc != now) {
            cout<<"YES"<<endl;
            for(int j=0; j<n; j++) {
                if(i == j)cout<<1<<" ";
                else cout<<2<<" ";
            }
            cout<<endl;
            return;
        }
    }
    cout<<"NO"<<endl;
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