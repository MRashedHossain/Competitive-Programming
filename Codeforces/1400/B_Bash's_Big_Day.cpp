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
 
int solve(int tc) {
    int n;cin>>n;
    vector<int> v(n);
    for(int i=0;i<n;i++)cin>>v[i];
    sort(v.begin(),v.end());
    if(v.front() == v.back())return (v.back() == 1?1:n);
    map<int,int> f;
    for(int u:v){
        set<int> s;
        for(int i=2 ;i*i <= u;i++){
            if(u%i == 0){
                s.insert(i);
                s.insert(u/i);
            }
        }
        if(u>1)s.insert(u);
        for(auto i:s)f[i]++;
    }
    int res = 0;
    for(int i=1;i<=(int)1e5;i++)res = max(res,f[i]);
    return res;
}
signed main() {
    RASHED
    int TC = 1;
    //cin>>TC;
    for(int i=1; i<=TC; i++)cout<<solve(i)<<endl;
    return 0;
}
/**
CASES:
 
*/