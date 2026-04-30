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
    string s;
    cin>>s;
    map<char,int> f;
    for(auto i:s)f[i]++;
    int mn = 11,mx = 0;
    char mnc,mxc;
    for(auto i:f) {
        if(i.S>=mx) {
            mx = i.S;
            mxc = i.F;
        }
        if(i.S<mn) {
            mn = i.S;
            mnc = i.F;
        }
    }
//    show(mx);
//    show(mn);
//    show(mxc);
//    show(mnc);
    for(int i=0;i<n;i++){
        if(s[i] != mxc && f[s[i]] == mn){
            s[i] = mxc;
            break;
        }
    }
    cout<<s<<endl;
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
 