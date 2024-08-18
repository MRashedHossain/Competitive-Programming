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
    string s,t;
    cin>>s>>t;
    int n = s.size(),m = t.size();
    int pos[m+8],curr = 0;
    memset(pos,-1,sizeof pos);
    bool res = true;
    for(int i=0; i<m; i++) {
        bool found = false;
        for(int j=curr; j<n; j++) {
            if(t[i] == s[j] || s[j] == '?') {
                found = true;
                pos[i] = j;
                curr = j+1;
                break;
            }
        }
        if(found == false) {
            res = false;
            break;
        }
    }
    if(res) {
        cout<<"YES"<<endl;
        for(int i=0; i<m; i++) {
            if(pos[i] != -1) {
                s[pos[i]] = t[i];
            }
        }
        for(int i=0; i<n; i++) {
            if(s[i] == '?')s[i] = 'a';
        }
        cout<<s<<endl;
    } else {
        cout<<"NO"<<endl;
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
1
aa???
bbb
*/

