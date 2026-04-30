#include<bits/stdc++.h>
using namespace std;
 
#define RASHED ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
#define endl "\n"
#define int long long int
 
#define show(x) cout << #x << " = " << x << endl
#define inf (int)1e17
#define maxn 200010
 
#define all(x) (x).begin(), (x).end()
#define rall(x) (x).rbegin(), (x).rend()
#define sz(x) ((int)(x).size())
 
#define F first
#define S second
 
void solve(int tc) {
    int n;
    cin >> n;
    vector<int> f(n+2);
    for (int i = 1; i <= n; i++) cin >> f[i];
    if (n == 2) {
        cout << f[2] << " " << f[1] << endl;
        return;
    }
    int S = (f[1] + f[n]) / (n - 1);
    vector<int> g(n+2);
    for (int i = 1; i <= n-1; i++) g[i] = f[i+1] - f[i];
    vector<int> ps(n+2);
    for (int i = 1; i <= n-1; i++) {
        ps[i] = (g[i] + S) / 2;
    }
    vector<int> a(n+2);
    a[1] = ps[1];
    for (int i = 2; i <= n-1; i++) a[i] = ps[i] - ps[i-1];
    a[n] = S - ps[n-1];
    for (int i = 1; i <= n; i++) cout<< a[i] << " ";
    cout << endl;
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
 