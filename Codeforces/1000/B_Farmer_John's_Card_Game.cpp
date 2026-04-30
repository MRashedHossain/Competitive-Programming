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
    int n,m;cin>>n>>m;
    vector<int> f(n+4,0);
    map<int,vector<int>> v;
    bool res = true;
    for(int i=1;i<=n;i++){
        int row = inf;
        vector<int> tmp;
        for(int j=1;j<=m;j++){
            int x;cin>>x;tmp.push_back(x);
            row = min(row,x);
            if(n>x)f[x] = i;
        }
        sort(tmp.begin(),tmp.end());
        v[row] = tmp;
    } 
    for(int i=0;i<n;i++){
        if(v[i].empty()){
            res = false;
            break;
        }
        for(int j=1;j<m;j++){
            if(v[i][j] - v[i][j-1] != n){
                res = false;
                break;
            }
        }
    }
    if(res == false)cout<<"-1"<<endl;
    else {
        for(int i=0;i<n;i++)cout<<f[i]<<" ";
        cout<<endl;
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
 