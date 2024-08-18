#include<bits/stdc++.h>
using namespace std;

#define endl "\n"
#define RASHED ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);

///#define int long long int
#define show(x) cout << #x << " = " << x << endl
///#define maxn 200100

bool solve() {
    int n;string s;cin>>n>>s;
    int one = 0;
    for(auto i:s){
        if(i == '1')one++;
    }
    if(one%2)return false;
    if(one == 2){
        for(int i=1;i<n;i++){
            if(s[i] == '1' && s[i] == s[i-1])return false;
        }
    }
    return true;
}
signed main() {
    RASHED
    int tc;
    cin>>tc;
    while(tc--)cout<<(solve()?"YES":"NO")<<endl;
    return 0;
}
/**
CASES:

*/

