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
    string s;cin>>s;
    int n = s.size();
    int ii = n-1,jj = 0,age = 0,pise = 0;
    while(ii >= 0 && s[ii] == '1'){
            ii--;pise++;
    }
    while(jj < n && s[jj] == '1'){
            jj++;age++;
    }
    if(age == n || pise == n){
        cout<<n*n<<endl;
        return;
    }
    int res = age+pise;
    int i = 0;
    while(i<n){
        int j = i,now = 0;
        while(j<n && s[j] == '1'){
            now++;j++;
        }
        res = max(res,now);
        i = j+1;
    }
    int ans = 0;
    for(int i=res,j=1;i>0;i--,j++) ans = max(ans,i*j);
    cout<<ans<<endl;
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