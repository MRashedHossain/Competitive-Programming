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
    vector<int> v(n),res;
    for(int i=0;i<n;i++)cin>>v[i];
    sort(v.begin(),v.end());
    cout<<v[0]<<" ";
    for(int i=1;i<n;i++){
        if(v[i] == v[i-1])res.push_back(v[i]);
        else cout<<v[i]<<" ";
    }
    for(auto i:res)cout<<i<<" ";
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
