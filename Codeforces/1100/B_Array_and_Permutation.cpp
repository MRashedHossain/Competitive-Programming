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
 
bool solve(int tc) {
    int n;
    cin>>n;
    vector<int> p(n+2,0),a(n+2,0);
    map<int,int> f;
    for(int i=1; i<=n; i++) {
        cin>>p[i];
        f[p[i]] = i;
    }
    for(int i=1; i<=n; i++)cin>>a[i];
    vector<int> cng;
    cng.push_back(a[1]);
    for(int i=2; i<=n; i++) {
        if(a[i] == a[i-1])continue;
        cng.push_back(a[i]);
    }
    for(int i=0; i<sz(cng)-1; i++) {
        if(f[cng[i]] >= f[cng[i+1]])return false;
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