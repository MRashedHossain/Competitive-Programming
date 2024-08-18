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

bool solve(int tc) {
    string s;cin>>s;
    if(s.size()<3)return false;
    if(s[0] == '1' && s[1] == '0'){
        if(s.size()>3){
            if(s[2] == '0')return false;
            return true;
        }
        if(s[2] == '0' || s[2] == '1')return false;
        return true;
    }
    return false;
}
signed main() {
    RASHED
    int TC = 1;
    cin>>TC;
    for(int i=1; i<=TC; i++)cout<<(solve(i)?"YES":"NO")<<endl;
    return 0;
}
/**
CASES:

*/

