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
 
int dx[4] = {-1,1,0,0}; ///Side sharing move
int dy[4] = {0,0,-1,1}; ///Side sharing move
int n,m;
bool valid(int x,int y) {
    if(x>=1 && x <= n && y>=1 && y<= m)return true;
    return false;
}
void solve(int tc) {
    cin>>n>>m;
    int x1,x2,y1,y2,res = inf;
    cin>>x1>>x2>>y1>>y2;
    int now = 0;
    for(int i=0; i<4; i++) {
        if(valid(x1+dx[i],x2+dy[i]))now++;
    }
    res = min(res,now);
    now = 0;
    for(int i=0; i<4; i++) {
        if(valid(y1+dx[i],y2+dy[i]))now++;
    }
    res = min(res,now);
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