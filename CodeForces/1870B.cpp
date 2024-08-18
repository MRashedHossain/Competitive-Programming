#include<bits/stdc++.h>
using namespace std;

#define endl "\n"
#define RASHED ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
///#define show(x) cout << #x << " = " << x << endl
#define int long long int

void solve(int tc) {
    int n,m;cin>>n>>m;
    vector<int> a,b;
    for(int i=0;i<n;i++){
        int x;cin>>x;
        a.push_back(x);
    }
    for(int i=0;i<m;i++){
        int x;cin>>x;
        b.push_back(x);
    }
    int o=0,res1=a[0],res2=a[0];
    for(int i=1;i<n;i++)res1 = res1^a[i];
    for(auto i:b)o = o|i;
    res2 = a[0]|o;
    for(int i=1;i<n;i++)res2 = res2^(a[i]|o);
    if(n%2)cout<<res1<<" "<<res2<<endl;
    else cout<<res2<<" "<<res1<<endl;
}
signed main() {
    RASHED
    int TC;
    cin>>TC;
    for(int i=1;i<=TC;i++)solve(i);
    return 0;
}
/**
CASES:

*/

