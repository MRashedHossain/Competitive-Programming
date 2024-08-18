#include<bits/stdc++.h>
using namespace std;

#define endl "\n"
#define RASHED ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
///#define show(x) cout << #x << " = " << x << endl
///#define int long long int
string h = "##..##..##..##..##..##..##..##..##..##..##..##..##..##..";
string d = "..##..##..##..##..##..##..##..##..##..##..##..##..##..##";
void solve() {
    int n;
    cin>>n;
    for(int i=1; i<=n; i++) {
        if(i%2) {
            for(int j=0; j<2*n; j++)cout<<h[j];
            cout<<endl;
            for(int j=0; j<2*n; j++)cout<<h[j];
            cout<<endl;
        } else {
            for(int j=0; j<2*n; j++)cout<<d[j];
            cout<<endl;
            for(int j=0; j<2*n; j++)cout<<d[j];
            cout<<endl;
        }
    }
}
signed main() {
    RASHED
    int TC;
    cin>>TC;
    while(TC--)solve();
    return 0;
}
/**
CASES:

*/

