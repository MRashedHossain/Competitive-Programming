#include<bits/stdc++.h>
using namespace std;

#define endl "\n"
#define RASHED ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
///#define show(x) cout << #x << " = " << x << endl
///#define int long long int

bool solve(int tc) {
    string s;cin>>s;
    for(int i=0;i<s.size();i++){
        string p = s.substr(i,2);
        if(p == "it")return true;
    }
    return false;
}
signed main() {
    RASHED
    int tc;cin>>tc;
    for(int i=1;i<=tc;i++)cout<<(solve(i)?"YES":"NO")<<endl;
    return 0;
}
/**
CASES:

*/

