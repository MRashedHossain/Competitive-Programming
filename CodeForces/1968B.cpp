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
    int n,m,curr = 0,res = 0;
    string s,t;
    cin>>n>>m>>s>>t;
    for(int i=0; i<n; i++) {
        bool found = true;
        for(int j=curr; j<m; j++) {
            if(s[i] == t[j]) {
                res++;
                curr = j+1;
                found = false;
                break;
            }
        }
        if(curr >= m || found)return res;
    }
    return res;
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
