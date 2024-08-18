#include<bits/stdc++.h>
using namespace std;

#define endl "\n"
#define RASHED ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
///#define show(x) cout << #x << " = " << x << endl
#define int long long int

int solve() {
    int n;cin>>n;
    if(n == 0 || n == 1)return 0;
    int val = 1;
    while(n > val){
        val *= 2;
    }
    ///cout<<val<<endl;
    val /= 2;
    return n-val;
}
signed main() {
    RASHED
    int tc;
    cin>>tc;
    while(tc--)cout<<solve()<<endl;
    return 0;
}
/**
CASES:

*/

