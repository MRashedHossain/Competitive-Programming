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
    vector<pair<int,int>> q;
    vector<int> res;
    for(int i=1;i<=n;i++){
        int x;cin>>x;
        if(x%k == 0){
            res.push_back(i);
            continue;
        }
        q.push_back({x%k,-i});
    }
    if(!res.empty()){
        sort(res.begin(),res.end());
        for(auto i:res)cout<<i<<" ";
    }
    if(!q.empty())sort(q.rbegin(),q.rend());
    for(auto i:q)cout<<-i.S<<" ";
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