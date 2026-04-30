#include<bits/stdc++.h>
using namespace std;
 
#define endl "\n"
#define RASHED ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
///#define int long long int
 
int solve() {
    int n,m,x,y,d;cin>>n>>m>>x>>y>>d;
    bool flg = true;
    int ans = -1;
    for(int i=1,j=1;i<=n;i++){
        if(abs(x-i)+abs(y-j) <= d)flg = false;
    }
    for(int j=1,i=n;j<=m;j++){
        if(abs(x-i)+abs(y-j) <= d)flg = false;
    }
    if(flg)return (n+m-2);
    flg = true;
    for(int i=1,j=1;j<=m;j++){
        if(abs(x-i)+abs(y-j) <= d)flg = false;
    }
    for(int j=m,i=1;i<=n;i++){
        if(abs(x-i)+abs(y-j) <= d)flg = false;
    }
    if(flg)return (n+m-2);
    return -1;
}
signed main() {
    RASHED
    int tc;
    cin>>tc;
    while(tc--)cout<<solve()<<endl;
    return 0;
}
 