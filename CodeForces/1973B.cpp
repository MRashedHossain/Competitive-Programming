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
    vector<int> v[n+8];
    for(int i=1; i<=n; i++) {
        int x;
        cin>>x;
        vector<int> tmp;
        for(int j=0; j<21; j++) {
            tmp.push_back(x%2);
            x/=2;
        }
        reverse(tmp.begin(),tmp.end());
        v[i] = tmp;
    }
//    for(int i=1;i<=n;i++){
//        for(int j=0;j<3;j++)cout<<v[i][j]<<" ";
//        cout<<endl;
//    }
    int res = 1;
    for(int i=0; i<21; i++) {
        int curr = 1;
        for(int j=1; j<=n; j++) {
            if(v[j][i]) {
                res = max(res,curr);
                curr = 1;
            } else curr++;
        }
        if(curr <= n)res = max(res,curr);
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
CASES:

*/

