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
    int n,w;
    cin>>n>>w;
    vector<int> v(n);
    vector<pair<int,int>> vp(n);
    for(int i=0; i<n; i++) {
        int x;cin>>x;
        vp[i] = {x,i};
    }
    sort(rall(vp));
    int pos = 0,curr = 0,need = (w+1)/2;
    vector<int> res;
    while(pos < n && curr < need) {
        if(curr+vp[pos].F > w){
            pos++;
            continue;
        }
        curr += vp[pos].F;
        res.push_back(vp[pos].S+1);
        pos++;
    }
    if(curr >= need && curr <= w) {
        cout<<sz(res)<<endl;
        for(auto &i:res)cout<<i<<" ";
        cout<<endl;
    } else cout<<-1<<endl;
}
signed main() {
    //RASHED
    int TC = 1;
    cin>>TC;
    for(int i=1; i<=TC; i++)solve(i);
    return 0;
}
/**
CASES:
 
*/
 
 