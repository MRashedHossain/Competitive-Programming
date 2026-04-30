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
    vector<int> pos[k+2];
    for(int i=1;i<=k;i++)pos[i].push_back(0);
    for(int i=1;i<=n;i++){
        int x;cin>>x;pos[x].push_back(i);
    }
    for(int i=1;i<=k;i++)pos[i].push_back(n+1);
//    for(int i=1;i<=k;i++){
//        cout<<i<<" : ";
//        for(int j=0;j<pos[i].size();j++)cout<<pos[i][j]<<" ";
//        cout<<endl;
//    }
    int res = inf;
    for(int i=1;i<=k;i++){
        int nn = pos[i].size(),gap1 = 0,gap2 = 0;
        multiset<int, greater<int>> curr;
        for(int j=1;j<nn;j++)curr.insert(pos[i][j] - pos[i][j-1]);
        gap1 = *(curr.begin());
        curr.erase(curr.begin());
        gap2 = *(curr.begin());
//        show(gap1);
//        show(gap2);
        int now = (gap1+1)/2;
        res = min(res,max(now-1,gap2-1));
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