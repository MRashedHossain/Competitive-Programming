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
    int a,b,x,y;
    cin>>a>>b>>x>>y;
    if(a > b) {
        if((a^1) == b)cout<<y<<endl;
        else cout<<-1<<endl;
    }else {
        int res = 0,ad =(b-a)*x;
        for(int i=a;i<b;i++){
            if((i & 1))res += x;
            else res += y;
        }
        cout<<min(res,ad)<<endl;
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