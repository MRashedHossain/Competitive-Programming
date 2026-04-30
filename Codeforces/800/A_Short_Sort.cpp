#include<bits/stdc++.h>
using namespace std;
 
#define endl "\n"
#define FAST ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
#define show(x) cout << #x << " : " << x << endl
#define ll long long int
#define maxn 100100
 
void clean() {
 
}
void solve() {
    string s;
    cin>>s;
    if (s[0] == 'a' || s[1] == 'b' || s[2] == 'c')cout<<"YES"<<endl;
    else cout<<"NO"<<endl;
}
int main() {
    FAST
    int tc;
    cin>>tc;
    while(tc--) {
        solve();
    }
    return 0;
}
 