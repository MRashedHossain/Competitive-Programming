#include<bits/stdc++.h>
using namespace std;
 
#define RASHED ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
#define endl "\n"
#define int long long int
 
#define show(x) cout << #x << " = " << x << endl
#define inf (int)1e18
#define maxn 100010
 
#define F first
#define S second
 
void solve(int tc) {
    string s,t;cin>>s>>t;
    int res = 0;
    for(int i=0;i<min(s.size(),t.size());i++){
        if(s[i] != t[i])break;
        else res++;
    }
    int tn = t.size()-res,sn = s.size()-res;
    cout<<res+tn+sn+(res>0)<<endl;
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
 