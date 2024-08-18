#include<bits/stdc++.h>
using namespace std;

#define endl "\n"
#define RASHED ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
///#define show(x) cout << #x << " = " << x << endl
///#define int long long int

bool solve() {
    int n;
    string s[3];
    cin>>n>>s[0]>>s[1];
    for(int i=0; i<n-1; i++) {
        if(s[1][i+1] == '<' && s[0][i] == '<')return false;
    }
    for(int i=0; i<n-1; i++) {
        if(s[0][i+1] == '<' && s[1][i] == '<')return false;
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
Cases:
1
4
>>><
>><<
///01746825033 Mostofa Sheikh
*/

