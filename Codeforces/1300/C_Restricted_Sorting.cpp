#include<bits/stdc++.h>
using namespace std;
 
#define RASHED ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
#define endl "\n"
#define int long long int
 
#define show(x) cout << #x << " = " << x << endl
#define inf (int)1e17
#define maxn 100010
 
#define all(x) (x).begin(), (x).end()
#define rall(x) (x).rbegin(), (x).rend()
#define sz(x) ((int)(x).size())
 
#define F first
#define S second
 
void solve(int tc) {
    int n;cin>>n;
    vector<int> v(n),sor(n);
    for(int i=0;i<n;i++){
        cin>>v[i];
        sor[i] = v[i];
    }
    sort(all(sor));
    if(sor == v){
        cout<<-1<<endl;
        return;
    }
    int l = sor.front(),r = sor.back();
    int ans = inf;
    for(int i=0;i<n;i++){
        if(v[i] != sor[i]){
                    int now = max(v[i] - l,r - v[i]);
        ans = min(ans,now);
        }
    }
    cout<<ans<<endl;
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
 
 