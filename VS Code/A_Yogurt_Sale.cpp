#include<bits/stdc++.h>
using namespace std;

#define endl "\n"
#define RASHED ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);

///#define int long long int
///#define show(x) cout << #x << " = " << x << endl
///#define maxn 200100

void solve(int tc) {
    int n,a,b;cin>>n>>a>>b;
    int p1 = n*a,p2;
    if(n%2){
        p2 = (n/2)*b;
        p2+=a;
    }
    else p2 = (n/2)*b;
    cout<<min(p1,p2)<<endl;
}
signed main() {
    RASHED
    int TC;cin>>TC;
    for(int i=1; i<=TC; i++)solve(i);
    return 0;
}
/**
CASES:

*/

