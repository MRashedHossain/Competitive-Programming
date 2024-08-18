#include<bits/stdc++.h>
using namespace std;

#define endl "\n"
#define RASHED ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
///#define show(x) cout << #x << " = " << x << endl
///#define int long long int

void solve() {

}
signed main() {
    RASHED
    int n;cin>>n;
    map<int,int> f;
    for(int i=1;i<4*n;i++){
        int x;cin>>x;
        f[x]++;
    }
    for(int i=1;i<=n;i++){
        if(f[i] == 3){
            cout<<i<<endl;
            return 0;
        }
    }
}
/**
CASES:

*/

