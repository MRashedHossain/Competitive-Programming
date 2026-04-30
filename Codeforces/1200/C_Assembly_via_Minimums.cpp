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
    int sz = (n*(n-1))/2;
    vector<int> v(sz);
    for(int i=0;i<sz;i++)cin>>v[i];
    sort(v.begin(),v.end());
    vector<int> res;
    int pre = 0;
    for(int i=n-1;i>0;i--){
        int now = pre+i-1;
        res.push_back(v[now]);
        pre += i;
    }
    res.push_back(v.back());
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
 
 