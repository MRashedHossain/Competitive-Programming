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
vector<pair<int,int>> corner;
set<char> d,o;
bool check(int x,int y){
    for(auto i:corner){
        if(i.F == x && i.S == y)return false;
   }
   return true;
}
bool solve(int tc) {
    int n;cin>>n;
    char s[n+4][n+4];
    for(int i=1;i<=n;i++){
        for(int j=1;j<=n;j++){
            cin>>s[i][j];
        }
    }
    for(int i=1,j=1;i<=n;i++,j++){
        corner.push_back({i,j});
        d.insert(s[i][j]);
    }
    for(int i=n,j=1;i>=1;i--,j++){
        corner.push_back({i,j});
        d.insert(s[i][j]);
    }
    for(int i=1;i<=n;i++){
        for(int j=1;j<=n;j++){
            if(check(i,j))o.insert(s[i][j]);
        }
    }
//    for(auto i:d)cout<<i<<" ";
//    cout<<endl;
//    for(auto i:o)cout<<i<<" ";
//    cout<<endl;
    return (d.size() == 1 && o.size() == 1 && *d.begin() != *o.begin());
}
signed main() {
    RASHED
    int TC = 1;
    ///cin>>TC;
    for(int i=1; i<=TC; i++)cout<<(solve(i)?"YES":"NO")<<endl;
    return 0;
}
 
 
 
 
 
 