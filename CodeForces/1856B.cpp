#include<bits/stdc++.h>
using namespace std;

#define endl "\n"
#define RASHED ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);

#define int long long int
///#define show(x) cout << #x << " = " << x << endl
///#define maxn 200100

bool solve() {
    int n;cin>>n;
    int sum = 0,one = 0,ext = 0,a[n+5];
    for(int i=0;i<n;i++){
        cin>>a[i];
        sum += a[i];
        if(a[i] == 1)one++;
        else ext++;
    }
    if(one*2 + ext > sum || n < 2)return false;
    return true;
}
signed main() {
    RASHED
    int tc;
    cin>>tc;
    while(tc--)cout<<(solve()?"YES":"NO")<<endl;
    return 0;
}
/**
CASES:

*/
