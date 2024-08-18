#include<bits/stdc++.h>
using namespace std;

#define endl "\n"
#define RASHED ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
///#define show(x) cout << #x << " = " << x << endl
///#define int long long int

void solve(int tc) {
    int n;cin>>n;
    vector<int> v,per;
    for(int i=0;i<n;i++){
        int x;cin>>x;
        v.push_back(x);
    }
    int mex = n;
    for(int i=n-1;i>=0;i--){
        int tmp = mex - v[i];
        per.push_back(tmp);
        mex = min(mex,tmp);
    }
    for(int i=n-1;i>=0;i--)cout<<per[i]<<" ";
    cout<<endl;
}
signed main() {
    RASHED
    int TC;
    cin>>TC;
    for(int i=1;i<=TC;i++)solve(i);
    return 0;
}
/**
CASES:

*/

