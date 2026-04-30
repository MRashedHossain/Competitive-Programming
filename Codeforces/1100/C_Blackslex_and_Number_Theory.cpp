#include<bits/stdc++.h>
using namespace std;
 
#define RASHED ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
#define endl "\n"
#define int long long int
 
#define show(x) cout << #x << " = " << x << endl
#define inf (int)1e17
#define maxn 100010
 
#define all(x) (x.begin(),x.end())
#define rall(x) (x.rbegin(),x.rend())
#define sz(x) (x.size())
 
#define F first
#define S second
 
void solve(int tc) {
    int n;cin>>n;
    vector<int> v(n);
    for(int &i:v)cin>>i;
    sort(v.begin(),v.end());
    bool res = false;
    for(int i=1;i<n;i++){
        if(v[i] <= 2*v.front())res = true;
    }
    cout<<(res?v.front():v[1] - v.front())<<endl;
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
 
 