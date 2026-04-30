#include<bits/stdc++.h>
using namespace std;
 
#define endl "\n"
#define RASHED ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
///#define int long long int
///#define inf 99999999999999999
///#define F first
///#define S second
///#define show(x) cout << #x << " : " << x << endl
///#define maxn 200100
 
void solve() {
    int n,pre;
    cin>>n;
    vector<int> v,k;
    for (int i=1;i<n;i++){
        int x;cin>>x;
        k.push_back(x);
    }
    v.push_back(k[0]);
    for (int i=1;i<k.size();i++)v.push_back(min(k[i],k[i-1]));
    v.push_back(k[k.size()-1]);
    for (int i=0;i<n;i++)cout<<v[i]<<" ";
    cout<<endl;
}
int32_t main() {
    RASHED
    int tc;
    cin>>tc;
    while(tc--) {
        solve();
    }
    return 0;
}
 