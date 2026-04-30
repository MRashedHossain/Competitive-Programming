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
    int n,k,a,b;cin>>n>>k>>a>>b;
    vector<pair<int,int>> v;
    for(int i=1;i<=n;i++){
        int x,y;cin>>x>>y;
        int cost = (a*x)+(b*y),pos = i;
        v.push_back({cost,pos});
    }
    sort(v.begin(),v.end());
//    for(auto i:v)cout<<i.F<<" "<<i.S<<endl;
    vector<int> res;
    for(auto i:v){
        k-=i.F;
        if(k>=0)res.push_back(i.S);
        else break;
    }
    cout<<res.size()<<endl;
    for(auto i:res)cout<<i<<" ";
    cout<<endl;
}
signed main() {
    RASHED
    int TC = 1;
    ///cin>>TC;
    for(int i=1; i<=TC; i++)solve(i);
    return 0;
}
/**
CASES:
 
*/
 