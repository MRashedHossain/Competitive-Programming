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
    int ans = 0;
    for (int i=0; i<10; i++) {
        cin>>s;
        for (int j=0; j<10; j++) {
            if(s[j] == 'X') {
                ans+=min(i,min(j,min(9-i,9-j)))+1;
            }
        }
    }
    cout<<ans<<endl;
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
 