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
int cal(int a,int b,int c,int d){
    if(a>c && b>d)return 1;
    if(a == c && b>d)return 1;
    if(a>c && b == d)return 1;
    return 0;
}
void solve(int tc) {
    int a,b,c,d,res = 0;cin>>a>>b>>c>>d;
    res+=cal(a,b,c,d);
    res+=cal(a,b,d,c);
    res+=cal(b,a,c,d);
    res+=cal(b,a,d,c);
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

