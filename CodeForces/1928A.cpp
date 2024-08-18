#include<bits/stdc++.h>
using namespace std;

#define endl "\n"
#define RASHED ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
///#define show(x) cout << #x << " = " << x << endl
#define int long long int

bool solve(int tc) {
    int n,m;
    cin>>n>>m;
    if(n%2 && m%2)return false;
    int N = n,M = m;
    if(N%2 == 0) {
        int NN = N/2;
        int MM = M*2;
        if(NN!=n && NN!=m && MM!=n && MM!=m)return true;
    }
    if(M%2 == 0) {
        int NN = N*2;
        int MM = M/2;
        if(NN!=n && NN!=m && MM!=n && MM!=m)return true;
    }
    return false;
}
signed main() {
    RASHED
    int TC;
    cin>>TC;
    for(int i=1; i<=TC; i++)cout<<(solve(i)?"Yes":"No")<<endl;
    return 0;
}
/**
CASES:

*/

