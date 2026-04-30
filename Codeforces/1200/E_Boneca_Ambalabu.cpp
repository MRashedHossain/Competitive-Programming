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
    vector<int> v(n),bit[n];
    for(int i=0; i<n; i++)cin>>v[i];
    sort(v.rbegin(),v.rend());
    for(int i=0; i<n; i++) {
        vector<int> now;
        int curr = v[i];
        for(int j=0; j<30; j++) {
            now.push_back(curr%2);
            curr/=2;
        }
        bit[i] = now;
    }
//    for(int i=0;i<n;i++){
//        for(int j=0;j<30;j++)cout<<bit[i][j];
//        cout<<endl;
//    }
    vector<int> on;
    for(int i=0;i<30;i++){
        int curr = 0;
        for(int j=0;j<n;j++)if(bit[j][i])curr++;
        on.push_back(curr);
    }
//    for(int i=0;i<30;i++)cout<<on[i]<<" ";
//    cout<<endl;
    int res = 0;
    for(int i=0;i<n;i++){
        int now = 0;
        for(int j=0;j<30;j++){
            if(bit[i][j])now += ((1<<j)*(n-on[j]));
            else now += ((1<<j)*(on[j]));
        }
        res = max(res,now);
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