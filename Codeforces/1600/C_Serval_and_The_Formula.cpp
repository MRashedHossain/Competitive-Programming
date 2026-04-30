#include<bits/stdc++.h>
using namespace std;
 
#define RASHED ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
#define endl "\n"
#define int long long int
 
#define show(x) cout << #x << " = " << x << endl
#define inf (int)1e18
#define maxn 100010
 
#define F first
#define S second
bool check(int x,int y,int k) {
    int l = x+y+k+k, r = ((x+k)^(y+k));
    return (l == r);
}
void solve(int tc) {
    int x,y;
    cin>>x>>y;
    if(x == y) {
        cout<<-1<<endl;
        return;
    }
    for(int i=1; i<=inf; i*=2) {
        if(max(x,y)>i)continue;
        if(check(x,y,i-max(x,y))){
            cout<<i-max(x,y)<<endl;
            return;
        }
    }
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