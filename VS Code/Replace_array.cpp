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
    vector<int> v,vv;
    map<int,int> f1,f2;
    for(int i=0;i<n;i++){
        int x;cin>>x;v.push_back(x);
        f1[x]++;
    }
    sort(v.begin(),v.end());
    vv.push_back(0);
    for(int i=1;i<n;i++){
        if(v[i] == v[i-1])vv.push_back(vv[i-1]);
        else vv.push_back(i);
    }
    for(int i=0;i<n;i++)f2[vv[i]]++;
    int res = 0;
    for(int i=0;i<n;i++){
        res+=min(f1[vv[i]],f2[vv[i]]);
        f2[vv[i]] = 0;
    }
    cout<<res<<endl;
//    for(auto i:v)cout<<i<<" ";
//    cout<<endl;
//    for(auto i:vv)cout<<i<<" ";
//    cout<<endl;
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

