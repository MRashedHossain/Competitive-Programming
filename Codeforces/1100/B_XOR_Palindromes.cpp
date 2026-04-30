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
    int n;string s;cin>>n>>s;
    int diff = 0;
    for(int i=0,j=n-1;i<(n/2);i++,j--){
        if(s[i] != s[j])diff++;
    }
    vector<int> res(n+4,0);
    for(int i=diff;i<=n-diff;i++){
        if(n%2){
            res[i] = 1;continue;
        }
        if((i-diff)%2 == 0)res[i] = 1;
    }
    for(int i=0;i<=n;i++)cout<<res[i];
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