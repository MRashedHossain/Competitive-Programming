#include<bits/stdc++.h>
using namespace std;

#define endl "\n"
#define RASHED ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
///#define show(x) cout << #x << " = " << x << endl
///#define int long long int

void solve() {

}
signed main() {
    RASHED
    int n;
    cin>>n;
    vector<int> v;
    for(int i = 0; i<n; i++) {
        int x;
        cin>>x;
        v.push_back(x);
    }
    sort(v.begin(),v.end());
    cout<<v[n/2]<<endl;
    return 0;
}

