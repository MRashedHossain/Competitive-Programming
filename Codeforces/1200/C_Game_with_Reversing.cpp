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
    int n;string s,t;cin>>n>>s>>t;
    if(s == t)return 0;
    int res1 = 0,res2 = 0;
    for(int i=0;i<n;i++){
        if(s[i] != t[i])res1++;
    }
    reverse(t.begin(),t.end());
    for(int i=0;i<n;i++){
        if(s[i] != t[i])res2++;
    }
    if(res2 == 0)return 2;
    res1 = (2*res1) - (res1%2);
    res2 = (2*res2) - (1-res2%2);
    return min(res1,res2);
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