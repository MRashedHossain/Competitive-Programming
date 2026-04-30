#include<bits/stdc++.h>
using namespace std;
 
#define RASHED ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
#define endl "\n"
#define int long long int
 
#define show(x) cout << #x << " = " << x << endl
#define inf (int)1e18
#define maxn 100010
 
#define F first
#define S second
 
void solve(int tc) {
    int n;
    cin>>n;
    map<int,map<int,priority_queue<pair<int,int>>>> f;
    for(int i=0; i<n; i++) {
        pair<int,int> p;
        cin>>p.F>>p.S;
        f[min(p.F,p.S)][max(p.F,p.S)].push(p);
    }
    for (auto i:f) {
        for(auto j:i.S) {
            while(!j.S.empty()) {
                cout<<j.S.top().F<<" "<<j.S.top().S<<" ";
                j.S.pop();
            }
        }
    }
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
 