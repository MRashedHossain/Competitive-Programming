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
    int q,n = s.size();cin>>q;
    set<int> ss;
    for(int i=0;i<n;i++){
        if(i+3>n)break;
        if(s.substr(i,4) == "1100")ss.insert(i);
    }
    while(q--){
        int i;char c;cin>>i>>c;i--;s[i] = c;
        for(int ii=max(0LL,i-3);ii<min(n,i+3);ii++){
            auto tt = ss.find(ii);
            if(tt != ss.end())ss.erase(tt);
        }
        for(int ii=max(0LL,i-3);ii<min(n,i+3);ii++){
            if(ii+3>n)break;
            if(s.substr(ii,4) == "1100")ss.insert(ii);
        }
        cout<<(ss.empty()?"NO":"YES")<<endl;
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
 