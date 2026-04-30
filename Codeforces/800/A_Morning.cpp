#include<bits/stdc++.h>
using namespace std;
 
#define endl "\n"
#define RASHED ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
///#define ll long long int
///#define inf 99999999999999999
///#define F first
///#define S second
///#define show(x) cout << #x << " : " << x << endl
///#define maxn 200100
 
void clean() {
 
}
void solve() {
    string s;
    cin>>s;
    int ans = 0;
    char curr = '1';
    for (int i=0; i<4; i++) {
        if (curr == '0') {
            if(s[i] == '0')ans++;
            else {
                ans+=(10-(s[i]-'0')+1);
                curr = s[i];
            }
        } else if (s[i] == '0') {
            ans+=(10-(curr-'0')+1);
            curr = '0';
        } else {
            ans+=(abs(s[i]-curr)+1);
            curr = s[i];
        }
    }
    cout<<ans<<endl;
}
int main() {
    RASHED
    int tc;
    cin>>tc;
    while(tc--) {
        solve();
    }
    return 0;
}
 