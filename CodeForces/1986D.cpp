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
    cin>>n;
    string s;
    int mvp = 100;
    if(s[0] == '0' || s[n-1] == '0') {
        cout<<0<<endl;
        return;
    }
    for(int i=0; i<n-1; i++) {
        int curr = ((s[i]-'0')*10)+(s[i]-'0');
        mvp = max(mvp,curr);
    }
    if(mvp == 0) {
        cout<<0<<endl;
        return;
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

