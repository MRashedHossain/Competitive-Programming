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
    int n,m,s;cin>>n>>s>>m;
    vector<pair<int,int>> v;
    for(int i=0;i<n;i++){
        int x,y;cin>>x>>y;
        v.push_back({x,y});
    }
    sort(v.begin(),v.end());
    if(v[0].F>=s)return true;
    int curr = v[0].S;
    for(int i=1;i<n;i++){
        if(v[i].F >= curr){
            if(v[i].F - curr >= s)return true;
            curr = max(curr,v[i].S);
        }
    }
    if(m-v[n-1].S  >= s)return true;
    return false;
}
signed main() {
    RASHED
    int TC = 1;
    cin>>TC;
    for(int i=1; i<=TC; i++)cout<<(solve(i)?"YES":"NO")<<endl;
    return 0;
}
/**

*/

