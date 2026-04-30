#include<bits/stdc++.h>
using namespace std;
 
#define RASHED ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
#define endl "\n"
#define int long long int
 
#define show(x) cout << #x << " = " << x << endl
#define inf (int)1e17
#define maxn 200010
 
#define all(x) (x).begin(), (x).end()
#define rall(x) (x).rbegin(), (x).rend()
#define sz(x) ((int)(x).size())
 
#define F first
#define S second
 
void solve(int tc) {
    int n;
    cin>>n;
    vector<int> a(n),ans;
    for(int &i:a)cin>>i;
    for(int i=n-1; i>=0; i--) {
        ans.push_back(a[i]);
        while(sz(ans) >= 2 && ans[sz(ans)-2] == ans.back()+1) {
            ans[sz(ans)-2] = ans.back();
            ans.pop_back();
        }
    }
    cout<<sz(ans)<<endl;
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
 