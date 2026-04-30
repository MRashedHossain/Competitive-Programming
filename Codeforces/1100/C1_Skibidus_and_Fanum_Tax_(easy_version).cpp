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
    int n,m;cin>>n>>m;
    vector<pair<int,int>> v(n);
    for(int i=0;i<n;i++)cin>>v[i].F;
    int mi;cin>>mi;
    for(int i=0;i<n;i++)v[i].S = mi - v[i].F;
    int pre = min(v[0].F,v[0].S);
    for(int i=1;i<n;i++){
        if(min(v[i].F,v[i].S)>=pre)pre = min(v[i].F,v[i].S);
        else if(max(v[i].F,v[i].S)>=pre)pre = max(v[i].F,v[i].S);
        else return false;
    }
    return true;
}
signed main() {
    RASHED
    int TC = 1;
    cin>>TC;
    for(int i=1; i<=TC; i++)cout<<(solve(i)?"YES":"NO")<<endl;
    return 0;
}
/**
CASES:
 
*/