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
    int n,k;cin>>n>>k;
    vector<int> v(k+1,0);
    for(int i=0;i<k;i++){
        int x,y;cin>>x>>y;
        v[x]+=y;
    }
    sort(v.rbegin(),v.rend());
    int res = 0;
    for(int i=0,j=1;i<k;i++,j++){
        if(j>n)break;
        res += v[i];
    }
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
 