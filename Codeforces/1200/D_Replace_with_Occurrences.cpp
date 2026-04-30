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
    vector<int> v(n+2),f[n+2];
    for(int i=1; i<=n; i++) {
        cin>>v[i];
        f[v[i]].push_back(i);
    }
    for(int i=1; i<=n; i++) {
        int u = f[i].size();
        if(u%i) {
            cout<<-1<<endl;
            return;
        }
    }
    vector<int> res(n+2);
    int curr = 1;
    for(int i=1; i<=n; i++) {
        for(int j=0; j<f[i].size(); j+=i) {
            for(int k=j; k<i+j; k++) {
                res[f[i][k]] = curr;
            }
            curr++;
        }
    }
    for(int i=1; i<=n; i++)cout<<res[i]<<" ";
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
 