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
    vector<int> v(n+2),res(n+2,0);
    map<int,int> f;
    for(int i=1; i<=n; i++) {
        cin>>v[i];
        f[v[i]]++;
    }
    int need = f[1],pre = 0,now = f[1];
    for(auto i:f) {
        if(i.S   > need || i.F - pre != 1 || now < i.S) {
            cout<<"-1"<<endl;
            return;
        }
        pre = i.F;
        now = min(now,i.S);
    }
    for(int i=1; i<=n; i++) {
        if(f[v[i]]) {
            res[i] = f[v[i]];
            f[v[i]]--;
        }
    }
    for(int i=1; i<=n; i++) {
        if(res[i] > need || res[i] == 0) {
            cout<<"-1"<<endl;
            return;
        }
    }
    cout<<need<<endl;
    for(int i=1; i<=n; i++) {
        cout<<res[i]<<" ";
    }
    cout<<endl;
}
signed main() {
    RASHED
    int TC = 1;
    //cin>>TC;
    for(int i=1; i<=TC; i++)solve(i);
    return 0;
}
