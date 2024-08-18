#include<bits/stdc++.h>
using namespace std;

#define endl "\n"
#define RASHED ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
///#define show(x) cout << #x << " = " << x << endl
#define int long long int
int solve() {
    int n;cin>>n;
    vector<int> v;
    if(__builtin_popcount(n) == 1)return n-1;
    while(n>0){
        v.push_back(n%2);
        n /= 2;
    }
    int res =1;
    for(int i=1;i<v.size();i++)res*=2;
    return res-1;
}
signed main() {
    ///RASHED
    int tc;
    cin>>tc;
    while(tc--)cout<<solve()<<endl;
    return 0;
}
/**
CASES:

*/

