#include<bits/stdc++.h>
using namespace std;
 
#define RASHED ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
#define endl "\n"
#define int long long int
 
#define show(x) cout << #x << " : " << x << endl
#define inf (int)1e17
#define maxn 100010
 
#define F first
#define S second
 
void solve(int tc) {
    int n,k,res = 0;
    cin>>n>>k;
    if(k == 1) {
        cout<<n<<endl;
        return;
    }
    vector<int> v;
    int curr = 1;
    while(curr <= n) {
        v.push_back(curr);
        curr*=k;
    }
    for(int i=v.size()-1; i>=0; i--) {
        if(n>=v[i]) {
            res+=(n/v[i]);
            n%=v[i];
        }
    }
    cout<<res<<endl;
}
signed main() {
    RASHED
    int TC = 1;
    cin>>TC;
    for(int i=1; i<=TC; i++)solve(i);
    return 0;
}
/**
 
*/
 