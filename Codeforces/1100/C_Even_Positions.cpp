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
    string s;
    cin>>n>>s;
    stack<int> spc,opn,cls;
    int res = 0;
    for(int i=0; i<n; i++) {
        if(s[i] == '_') {
            if(opn.empty())spc.push(i);
            else {
                res += (i - opn.top());
                opn.pop();
            }
        } else if(s[i] == '(')opn.push(i);
        else {
            if(opn.empty()) {
                res += (i - spc.top());
                spc.pop();
            } else {
                res += (i-opn.top());
                opn.pop();
            }
        }
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