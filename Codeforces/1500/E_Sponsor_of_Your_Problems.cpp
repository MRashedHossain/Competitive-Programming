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
    string l,r;
    cin>>l>>r;
    if(l == r) {
        cout<<(2*l.size())<<endl;
        return;
    }
    int idx = 0;
    while(l[idx] == r[idx])idx++;
    if((r[idx] - '0') - (l[idx] - '0') >= 2) {
        cout<<(idx*2)<<endl;
    } else {
        int res = (idx*2) + 1;
        for(int i=idx+1; i<l.size(); i++) {
            if(l[i] == '9' && r[i] == '0')res++;
            else break;
        }
        cout<<res<<endl;
    }
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