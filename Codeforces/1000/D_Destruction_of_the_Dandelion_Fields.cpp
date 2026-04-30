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
    int n;
    cin>>n;
    vector<int> e,o;
    int res = 0;
    for(int i=0; i<n; i++) {
        int x;
        cin>>x;
        if(x%2)o.push_back(x);
        else e.push_back(x);
    }
    for(auto i:e)res += i;
    if(o.empty())cout<<0<<endl;
    else {
        sort(o.rbegin(),o.rend());
        for(int i=0;i<(o.size()+1)/2;i++)res += o[i];
        cout<<res<<endl;
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
 