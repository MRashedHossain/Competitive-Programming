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
    int n,q;string s,t;cin>>n>>q>>s>>t;
    int Sps[30][n+8],Tps[30][n+8];
    memset(Sps,0,sizeof(Sps));
    memset(Tps,0,sizeof(Tps));
    for(int i=0;i<n;i++){
        Sps[s[i]-'a'][i+1] = 1;
        Tps[t[i]-'a'][i+1] = 1;
    }
    for(int i=0;i<26;i++){
        for(int j=1;j<=n;j++){
            Sps[i][j] += Sps[i][j-1];
            Tps[i][j] += Tps[i][j-1];
        }
    }
    while(q--){
        int l,r,res = 0;cin>>l>>r;
        for(int i=0;i<26;i++){
        int SS = Sps[i][r]-Sps[i][l-1],TT = Tps[i][r]-Tps[i][l-1];
            res+=(abs(SS-TT));
        }
        cout<<res/2<<endl;
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

*/


