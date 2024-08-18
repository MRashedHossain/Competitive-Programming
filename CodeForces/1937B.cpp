#include<bits/stdc++.h>
using namespace std;

#define endl "\n"
#define RASHED ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
///#define show(x) cout << #x << " = " << x << endl
#define int long long int

void solve() {
    int n;
    cin>>n;
    int x = n,y = 1;
    char s[3][n+4];
    for(int i=1; i<=2; i++) {
        for(int j=1; j<=n; j++)cin>>s[i][j];
    }
    string res = "";
    for(int i=n; i>=2; i--) {
        if(s[2][i-1] == '0' && s[1][i] == '1')x = i-1;
    }
    for(int i=1; i<x; i++) {
        if(s[1][i+1] == '0' && s[2][i] == '1')y = i+1;
    }
    for(int i=1; i<=x; i++)res+=s[1][i];
    for(int i=x; i<=n; i++)res+=s[2][i];
    cout<<res<<endl;
    cout<<x-y+1<<endl;
}
signed main() {
    RASHED
    int tc;
    cin>>tc;
    while(tc--)solve();
    return 0;
}
/**
1
8
00100111
11101101

1
4
1101
1100

1
2
00
00
*/

