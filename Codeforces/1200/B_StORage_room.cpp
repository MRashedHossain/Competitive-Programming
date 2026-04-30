#include<bits/stdc++.h>
using namespace std;
 
#define endl "\n"
#define RASHED ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
#define int long long int
 
void solve() {
    int n;
    cin>>n;
    int M[n+4][n+4],res[n+4];
    for(int i=1; i<=n; i++) {
        for(int j=1; j<=n; j++)cin>>M[i][j];
    }
    for(int i=1; i<=n; i++)res[i] = (1 << 30) - 1;
    ///for(int i=1;i<=n;i++)cout<<res[i]<<" ";
    for(int i=1; i<=n; i++) {
        for(int j=1; j<=n; j++) {
            if(i != j) {
                (res[i] &= M[i][j]);
                (res[j] &= M[i][j]);
            }
        }
    }
    for(int i=1; i<=n; i++) {
        for(int j = 1; j<=n; j++) {
            if(M[i][j] != (res[i] | res[j]) && i != j) {
                cout<<"NO"<<endl;
                return;
            }
        }
    }
    cout<<"YES"<<endl;
    for(int i=1; i<=n; i++)cout<<res[i]<<" ";
    cout<<endl;
}
signed main() {
    RASHED
    int tc;
    cin>>tc;
    while(tc--)solve();
    return 0;
}
 