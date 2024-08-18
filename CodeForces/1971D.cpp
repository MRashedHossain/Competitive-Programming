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

int solve(int tc) {
    string s;
    cin>>s;
    int n = s.size(),start = 0;
    while(s[start] == '0' && start < n)start++;
    if(start)while(s[start] == '1' && start < n)start++;
    ///show(start);
    if(start >= n)return 1;
    if(start) {
        int pcs = 1;
        for(int i=start; i<n; i++)if(s[i] != s[i-1])pcs++;
        return pcs;
    } else {
        int pcs = 1;
        bool found = false;
        for(int i=1; i<n; i++){
            if(s[i] != s[i-1])pcs++;
            if(s[i] == '1' && s[i-1] == '0' && found == false)found = true;
        }
        if(found)pcs--;
        return pcs;
    }
}
signed main() {
    RASHED
    int TC = 1;
    cin>>TC;
    for(int i=1; i<=TC; i++)cout<<solve(i)<<endl;
    return 0;
}
/**
CASES:

*/

