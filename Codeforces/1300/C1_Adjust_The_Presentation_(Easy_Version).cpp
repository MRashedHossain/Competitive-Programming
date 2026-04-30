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
 
bool solve(int tc) {
    int n,m,q;cin>>n>>m>>q;
    vector<int> aa,bb,b;
    for(int i=0;i<n;i++){
        int x;cin>>x;aa.push_back(x);
    }
        for(int i=0;i<m;i++){
        int x;cin>>x;b.push_back(x);
    }
    map<int,int> f;
    for(int i=0;i<m;i++){
        if(f[b[i]] == 0){
            bb.push_back(b[i]);
            f[b[i]]++;
        }
    }
    n = aa.size(),m = bb.size();
    for(int i=0;i<min(n,m);i++){
        if(aa[i] != bb[i])return false;
    }
    return true;
}
signed main() {
    RASHED
    int TC = 1;
    cin>>TC;
    for(int i=1; i<=TC; i++)cout<<(solve(i)?"YA":"TIDAK")<<endl;
    return 0;
}
/**
CASES:
 
*/
 