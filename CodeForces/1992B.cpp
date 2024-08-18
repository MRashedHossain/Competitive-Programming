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
    int N,n;
    cin>>N>>n;
    vector<int> v;
    for(int i=0;i<n;i++){
        int x;cin>>x;
        v.push_back(x);
    }
    sort(v.rbegin(),v.rend());
    int res = 0;
    for(int i=1;i<n;i++){
        res+=(v[i]+v[i]-1);
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

