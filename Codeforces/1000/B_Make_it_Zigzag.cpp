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
    int n;cin>>n;
    vector<int> v(n+2),t1(n+2),t2(n+2);
    for(int i=1;i<=n;i++){
        cin>>v[i];
        t1[i] = t2[i] = v[i];
    }
    int typ1 = 0,typ2 = 0;
    int mx = 0,res = 0;
    for(int i=1;i<=n;i++){
        mx = max(mx,v[i]);
        if(i%2 == 0)v[i] = mx;
    }
    for(int i=3;i<n;i+=2){
        res += max(0LL,v[i] - min(v[i-1],v[i+1])+1);
    }
    res += max(0LL,v[1] - v[2] +1);
    if(n%2)res += max(0LL,v[n] - v[n-1] +1);
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
 