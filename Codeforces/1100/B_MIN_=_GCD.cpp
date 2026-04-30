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
 
bool solve(int tc) {
    int n;
    cin>>n;
    vector<int> v(n),res;
    map<int,int> f;
    for(int i=0; i<n; i++) {
        cin>>v[i];
        f[v[i]]++;
    }
    sort(v.begin(),v.end());
    if(f[v[0]]>1)return true;
    for(int i=1; i<n; i++) {
        if(v[i]%v[0] == 0)res.push_back(v[i]);
    }
    if(res.size()<2)return false;
    int nn = res.size(),gg = res[0];
    for(int i=1;i<nn;i++){
        int now = __gcd(gg,res[i]);
        if(now == v[0])return true;
        else if(now > v[0])gg = now;
    }
    return false;
}
signed main() {
    RASHED
    int TC = 1;
    cin>>TC;
    for(int i=1; i<=TC; i++)cout<<(solve(i)?"Yes":"No")<<endl;
    return 0;
}
/**
CASES:
 
*/