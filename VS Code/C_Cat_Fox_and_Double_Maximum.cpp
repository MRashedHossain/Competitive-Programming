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
    int n,idx = -1;
    cin>>n;
    vector<int> v,res;
    vector<pair<int,int>> lm,lc;
    for(int i=0; i<n; i++)res.push_back(-1);
    for(int i=0; i<n; i++) {
        int x;
        cin>>x;
        v.push_back(x);
        if(x == n)idx = i+1;
    }
    if(idx%2 == 0)reverse(v.begin(),v.end());
    for(int i=2; i<n; i+=2)lm.push_back({v[i],i});
    for(int i=1; i<n; i+=2)lc.push_back({v[i],i});
    sort(lm.begin(),lm.end());
    sort(lc.rbegin(),lc.rend());
//    for(auto i:lm)cout<<i.F<<" "<<i.S<<endl;
//    cout<<endl;
//    for(auto i:lc)cout<<i.F<<" "<<i.S<<endl;
    int L = n,R = 1;
    for(auto i:lm) {
        res[i.S] = L;
        L--;
    }
    for(auto i:lc) {
        res[i.S] = R;
        R++;
    }
    res[0] = L;
    if(idx%2 == 0)reverse(res.begin(),res.end());
    for(int i=0; i<n; i++)cout<<res[i]<<" ";
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

