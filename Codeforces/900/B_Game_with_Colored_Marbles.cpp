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
    vector<int> v(n),f(n+4,0);
    for(int i=0; i<n; i++) {
        int x;
        cin>>x;
        v[i] = x;
        f[x]++;
    }
    sort(f.begin(),f.end());
    int alice = 0;
    bool curr = true;
//    for(auto i:f)cout<<i<<" ";
//    cout<<endl;
    for(auto i:f) {
        if(i>0) {
            if(i>1)alice++;
            else{
                if(curr)alice+=2;
            }
            if(curr)curr = false;
            else curr = true;
        }
    }
    cout<<alice<<endl;
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