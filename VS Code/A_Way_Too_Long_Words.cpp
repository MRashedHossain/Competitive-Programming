#include<bits/stdc++.h>
using namespace std;

#define endl "\n"
#define RASHED ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);

///#define int long long int
///#define show(x) cout << #x << " = " << x << endl
///#define maxn 200100

void solve(int tc) {
    string s;cin>>s;
    int n = (int)s.size();
    if(n>10)cout<<s[0]<<n-2<<s[n-1]<<endl;
    else cout<<s<<endl;
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
