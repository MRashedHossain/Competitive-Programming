#include<bits/stdc++.h>
using namespace std;
 
#define RASHED ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
#define endl "\n"
#define int long long int
 
#define show(x) cout << #x << " : " << x << endl
#define inf (int)1e17
#define maxn 100010
 
#define F first
#define S second
string s = "ROYGBIV";
void solve(int tc) {
    int n;cin>>n;
    string res = "ROYGBIV";
    int fnl = n;
    n-=7;
    for(int i=1;i<=n;i++){
        for(int j=0;j<7;j++){
            int now = res.size(),bosao = 0;
            for(int k=1;k<=3;k++){
                if(res[now-k] == s[j] || res[k-1] == s[j])bosao++;
            }
            if(bosao == 0){
                res += s[j];
                break;
            }
        }
    }
    cout<<res<<endl;
}
signed main() {
    RASHED
    int TC = 1;
    ///cin>>TC;
    for(int i=1; i<=TC; i++)solve(i);
    return 0;
}
 
 
 
 