#include<bits/stdc++.h>
using namespace std;

#define endl "\n"
#define RASHED ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
///#define show(x) cout << #x << " = " << x << endl
#define int long long int

void solve(int tc) {
    int n,k;
    cin>>n>>k;
    if(k != 1 && k != n) {
        cout<<-1<<endl;
        return;
    }
    if(k==1) {
        for(int i=1; i<=n; i++)cout<<i<<" ";
        cout<<endl;
    } else {
        for(int i=1; i<=n; i++)cout<<1<<" ";
        cout<<endl;
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

