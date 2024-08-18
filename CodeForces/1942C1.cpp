#include<bits/stdc++.h>
using namespace std;

#define endl "\n"
#define RASHED ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
///#define show(x) cout << #x << " = " << x << endl
#define int long long int

void solve(int tc) {
    int n,x,y;
    cin>>n>>x>>y;
    vector<int> v;
    for(int i=0; i<x; i++) {
        int tmp;
        cin>>tmp;
        v.push_back(tmp);
    }
    sort(v.begin(),v.end());
    int res = 0;
    for(int i=1; i<x; i++) {
        if(v[i]-v[i-1] == 2)res++;
    }
    if(v[x-1] - v[0] == n-2)res++;
    cout<<x-2+res<<endl;
}
signed main() {
    RASHED
    int TC;
    cin>>TC;
    for(int i=1; i<=TC; i++)solve(i);
    return 0;
}
/**
CASES:

*/

