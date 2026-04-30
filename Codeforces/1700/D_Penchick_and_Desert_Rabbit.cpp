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
    int n,mx = 0;cin>>n;
    vector<int> v(n+4),prev(n+4,-inf),post(n+4,inf),res(n+4);
    for(int i=1;i<=n;i++)cin>>v[i];
    for(int i=1,j=n;i<=n;i++,j--){
        prev[i] = max(prev[i-1],v[i]);
        post[j] = min(post[j+1],v[j]);
        mx = max(mx,v[i]);
    }
    res[n] = mx;
    for(int i=n-1;i>=1;i--){
        if(prev[i]>post[i+1])res[i] = res[i+1];
        else res[i] = prev[i];
    }
//    for(int i=1;i<=n;i++)cout<<prev[i]<<" ";
//    cout<<endl;
//    for(int i=1;i<=n;i++)cout<<post[i]<<" ";
//    cout<<endl;
    for(int i=1;i<=n;i++)cout<<res[i]<<" ";
    cout<<endl;
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
 