#include<bits/stdc++.h>
using namespace std;

#define endl "\n"
#define RASHED ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);

///#define int long long int
///#define show(x) cout << #x << " = " << x << endl
///#define maxn 200100

void solve(int tc) {
    int n,m;
    cin>>n>>m;
    if(m == 1) {
        cout<<1<<endl;
        for(int i=0; i<n; i++)cout<<0<<endl;
        return;
    }
    if(m>n) {
        cout<<n+1<<endl;
        for(int i=0; i<n; i++) {
            for(int j=0; j<m; j++) {
                if(i+j >= m)cout<<(i+j)%m<<" ";
                else cout<<i+j<<" ";
            }
            cout<<endl;
        }
    } else {
        cout<<m<<endl;
        for(int i=0; i<m-1; i++) {
            for(int j=0; j<m; j++) {
                if(i+j >= m)cout<<(i+j)%m<<" ";
                else cout<<i+j<<" ";
            }
            cout<<endl;
        }
        int curr = m-2;
        for(int i=m-1; i<n; i++) {
            for(int j=0; j<m; j++) {
                if(curr+j >= m)cout<<(curr+j)%m<<" ";
                else cout<<curr+j<<" ";
            }
            cout<<endl;
        }
    }
}
signed main() {
    RASHED
    int TC;
    cin>>TC;
    for(int i=1; i<=TC; i++)solve(i);
    return 0;
}
/**
CASES:

*/

