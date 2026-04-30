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
    int q;
    cin>>q;
    vector<int> res,ppl[q+2];
    map<int,int> f;
    for(int ii=1; ii<=q; ii++) {
        int n;
        cin>>n;
        for(int i=1; i<=n; i++) {
            int x;
            cin>>x;
            ppl[ii].push_back(x);
            f[x]++;
        }
    }
    for(int ii=1; ii<=q; ii++) {
        int curr = -1;
        for(auto i:ppl[ii]) {
            if(f[i] == 1) {
                curr = i;
                f[i] = 0;
                break;
            }
        }
        for(auto i:ppl[ii])f[i]--;
        if(curr == -1){
            cout<<"-1"<<endl;
            return;
        }
        res.push_back(curr);
    }
    for(auto i:res)cout<<i<<" ";
    cout<<endl;
    return;
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
