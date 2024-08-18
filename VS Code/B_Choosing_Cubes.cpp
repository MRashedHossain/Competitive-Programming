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
    int n,pos,k,my_val;
    cin>>n>>pos>>k;
    vector<pair<int,int>> v;
    for(int i=1; i<=n; i++) {
        int x;
        cin>>x;
        v.push_back({x,i});
        if(i == pos)my_val = x;
    }
    sort(v.rbegin(),v.rend());
    if(v[k-1].F > my_val)cout<<"NO"<<endl;
    else if(v[k-1].F < my_val)cout<<"YES"<<endl;
    else {
        if(k == n)cout<<"YES"<<endl;
        else if(v[k].F == my_val)cout<<"MAYBE"<<endl;
        else cout<<"YES"<<endl;
    }
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

