#include<bits/stdc++.h>
using namespace std;

#define endl "\n"
#define RASHED ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);

#define int long long int
#define show(x) cout << #x << " = " << x << endl
///#define maxn 200100

void solve(int tc) {
    int n,k;
    cin>>n>>k;
    if(n==1) {
        cout<<k<<endl;
        return;
    }
    int val = 1,val1;
    while(val <= k)val *= 2;
    val = val/2;
    val--;
    val1 = k-val;
    cout<<val<<" "<<val1<<" ";
    for(int i=1; i<=n-2; i++)cout<<0<<" ";
    cout<<endl;
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
8
1 5
2 3
2 5
6 51
4 16
8 16
16 16
32 16
*/

