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
    int n,k;cin>>n>>k;
    vector<pair<int,int>> v;
    for(int i=1;i<=n;i++){
        int x;cin>>x;
        v.push_back({x,i});
    }
    sort(v.begin(),v.end());
    vector<int> res;
    for(auto i:v){
        if(i.F <= k){
            res.push_back(i.S);
            k -= i.F;
        }
    }
    cout<<res.size()<<endl;
    for(auto i:res)cout<<i<<" ";
    cout<<endl;
}
signed main() {
    RASHED
    int TC = 1;
    //cin>>TC;
    for(int i=1; i<=TC; i++)solve(i);
    return 0;
}
/**
CASES:
 
*/