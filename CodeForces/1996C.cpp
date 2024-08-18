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
    int n,q;
    string s,t;
    cin>>n>>q>>s>>t;
    while(q--) {
        map<char,int> fa,fb;
        int ll,rr,res = 0;
        cin>>ll>>rr;
        for(int i=ll-1; i<rr; i++) {
            fa[s[i]]++;
            fb[t[i]]++;
        }
        for(char c='a'; c<='z'; c++)res+=abs(fa[c]-fb[c]);
        cout<<res/2<<endl;
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

*/

