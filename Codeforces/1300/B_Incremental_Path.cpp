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
    int n,m;
    cin>>n>>m;
    set<int> res;
    map<int,int> f;
    vector<int> nxt;
    string cmd;
    cin>>cmd;
    for(int i=0; i<m; i++) {
        int x;
        cin>>x;
        res.insert(x);
        f[x]++;
    }
    int pos = 2;
    while(nxt.size() <= (2*n)+5) {
        if(f[pos] == 0)nxt.push_back(pos);
        pos++;
    }
    int curr = 1,ii = 0,ni = 0;
    while(ii<n) {
        if(cmd[ii] == 'A') {
            curr++;
            res.insert(curr);
            if(curr == nxt[ni])ni++;
        } else {
            curr = nxt[ni];
            res.insert(curr);
            ni++;
            curr = nxt[ni];
            ni++;
        }
        ii++;
    }
    cout<<res.size()<<endl;
    for(auto ii:res)cout<<ii<<" ";
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
 
 