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
    int n,k;
    cin>>n>>k;
    vector<int> v(n);
    unordered_map<int,int> f;
    for(int i=0; i<n; i++) {
        cin>>v[i];
        v[i] %= k;
        if(v[i])f[k-v[i]]++;
    }
    sort(v.begin(),v.end());
    if(v.back() == 0)return v.back();
    int x = 0,res = 0;
    for(auto i:f){
        int p = i.F,q = i.S;
        int curr = (p+(k*(q-1)));
        res = max(res,curr+1);
    }
    return res;
}
signed main() {
    RASHED
    int TC = 1;
    cin>>TC;
    for(int i=1; i<=TC; i++)cout<<solve(i)<<endl;
    return 0;
}
/**
CASES:
8 7 1 8 3 7 5 10 8 9
2 1 1 2 3 1 5 4 2 3
4 5 5 4 3 5 1 2 4 3
 
1 1 1 2 2 2 3 3 4 5
2 1 1 1 1 4 1 1 4 1
 
X = 17
*/