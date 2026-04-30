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
    int n,a,b,c;cin>>n>>a>>b>>c;
    int need = (n+a+b+c-1)/(a+b+c);
    int day = need*3;
    need *= (a+b+c);
    int flg = 0;
    if(need-c>=n)need-=c,flg++,day--;
    if(need-b>=n && flg == 1)need-=b,flg++,day--;
    if(need-a>=n && flg == 2)need-=a,flg++,day--;
    cout<<day<<endl;
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
 