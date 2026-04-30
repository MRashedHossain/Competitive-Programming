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
    int n,k;string s;cin>>n>>k>>s;
    if(k == 1 || k == n)cout<<1<<endl;
    else {
            k--;
        int l = -inf,r = inf;
        for(int i=k+1;i<n;i++){
            if(s[i] == '#'){
                r = i;
                break;
            }
        }
        for(int i=k-1;i>=0;i--){
            if(s[i] == '#'){
                l = i;
                break;
            }
        }
        if(l == -inf && r == inf)cout<<1<<endl;
        else cout<<max(min(k+1,n-r+1),min(l+2,n-k))<<endl;
    }
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
 