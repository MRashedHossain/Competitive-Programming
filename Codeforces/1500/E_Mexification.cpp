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
    int n,k;
    cin>>n>>k;
    vector<int> v(n),f(n+5,0);
    for(int i=0; i<n; i++) {
        cin>>v[i];
        if(v[i] < n)f[v[i]]++;
    }
    int mex = 0;
    for(int i=0; i<=n+3; i++) {
        if(f[i] == 0) {
            mex = i;
            break;
        }
    }
    int mv = min(k,(k%2)+2);
    for(int ii=0; ii<mv; ii++) {
        for(int i=0; i<n; i++) {
            if(v[i] >= mex) v[i] = mex;
            else {
                if(f[v[i]] > 1) v[i] = mex;
            }
        }
        for(int i=0; i<n+2; i++)f[i] = 0;
        for(auto i:v)f[i]++;
        for(int i=0; i<=n+3; i++) {
            if(f[i] == 0) {
                mex = i;
                break;
            }
        }
    }
    int res = 0;
    for(auto i:v)res += i;
    cout<<res<<endl;
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
 