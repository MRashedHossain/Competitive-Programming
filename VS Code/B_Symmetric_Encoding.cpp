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
    string s,r = "";
    cin>>n>>s;
    map<char,char> f;
    set<char> ss;
    for(char i:s)ss.insert(i);
    for(char i:ss)r+=i;
//    cout<<r<<endl;
//    return;
    for(int i=0,j=r.size()-1;i<=(r.size())/2;i++,j--){
        f[r[i]] = r[j];
        f[r[j]] = r[i];
    }
    for(int i=0;i<n;i++)cout<<f[s[i]];
    cout<<endl;
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

