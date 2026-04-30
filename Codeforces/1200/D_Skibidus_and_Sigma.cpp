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
    vector<pair<vector<int>,vector<int>>> v;
    for(int i=1;i<=n;i++){
        vector<int> tmp;int sum = 0,now = 0;
        for(int i=0;i<m;i++){
            int x;cin>>x;tmp.push_back(x);sum+=x;now = max(now,x);
        }
        int med = sum/m;
        vector<int> vv{sum,med,now};
        v.push_back({vv,tmp});
    }
    sort(v.rbegin(),v.rend());
    int curr = 0,res = 0;
    for(auto i:v){
        for(auto j:i.S){
            curr += j;
            res+=curr;
        }
    }
    cout<<res<<endl;
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