#include<bits/stdc++.h>
using namespace std;
 
#define RASHED ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
#define endl "\n"
#define int long long int
 
#define show(x) cout << #x << " = " << x << endl
#define inf (int)1e9
#define maxn 100010
 
#define F first
#define S second
 
void solve(int tc) {
    int n,k,q;cin>>n>>k>>q;
    vector<int> mmex(n+2,0),mmin(n+2,0),res(n+2,0),only_min,only_mex,rest;
    while(q--){
        int c,l,r;cin>>c>>l>>r;
        if(c == 1)for(int i=l;i<=r;i++)mmin[i]++;
        else for(int i=l;i<=r;i++)mmex[i]++;
    }
    for(int i=1;i<=n;i++){
        if((mmex[i] && mmin[i]) || (!mmex[i] && !mmin[i]))rest.push_back(i);
        else if(mmex[i])only_mex.push_back(i);
        else if(mmin[i])only_min.push_back(i);
    }
    for(auto i:rest)res[i] = inf;
    for(auto i:only_min)res[i] = k;
    for(int i=0;i<only_mex.size();i++)res[only_mex[i]] = (i%k);
    for(int i=1;i<=n;i++)cout<<res[i]<<" ";
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