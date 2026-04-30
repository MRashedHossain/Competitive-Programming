#include<bits/stdc++.h>
using namespace std;
//use it if the map/vector-pair iteration is really needed else not!!!
//#define F first
//#define S second
#define show(x) cout << #x << " : " << x << endl
#define ll long long int
#define maxn 100100
 
void solve() {
    string s;
    cin>>s;
    for (int i=0 ; i<9 ; i++) {
        if (s[i]=='1') {
            cout << 17 << endl;
            break;
        }
        if (s[i]=='7') {
            cout << 71 << endl;
            break;
        }
    }
}
int main() {
    int tc;
    cin>>tc;
    while(tc--) {
        solve();
    }
    return 0;
}
 