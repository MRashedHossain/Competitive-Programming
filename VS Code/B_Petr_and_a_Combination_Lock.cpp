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
int a[20],n;
bool dpp(int i,int curr){
    if(curr >= 360)curr -= 360;
    if(curr <= -360)curr += 360;
    if(i == n+1)return curr == 0;
    return (dpp(i+1,curr+a[i]) || dpp(i+1,curr-a[i]));
}
bool solve(int tc) {
    cin>>n;
    for(int i=1;i<=n;i++)cin>>a[i];
    return (dpp(2,a[1]) || dpp(2,-a[1]));
}
signed main() {
    RASHED
    int TC = 1;
    ///cin>>TC;
    for(int i=1; i<=TC; i++)cout<<(solve(i)?"YES":"NO")<<endl;
    return 0;
}
/**
CASES:

*/
