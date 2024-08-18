#include<bits/stdc++.h>
using namespace std;

#define endl "\n"
#define RASHED ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
#define show(x) cout << #x << " = " << x << endl
///#define int long long int

int solve() {
    int n;
    cin>>n;
    vector<int> f(n+8,0);
    for(int i=0; i<n; i++) {
        int x;
        cin>>x;
        f[x]++;
    }
    int a,b = -1;
    bool fst = false;
    for(int i=0; i<=n; i++) {
        if(!f[i]) {
            a = i;
            break;
        }
    }
    for(int i=0; i<=n; i++) {
        if(f[i] == 1) {
            if(fst){
                b = i;
                break;
            }
            else fst = true;
        }
    }
//    show(a);
//    show(b);
//    for(int i=0; i<=n; i++)cout<<i<<" : "<<f[i]<<endl;
    if(b == -1)return a;
    return min(a,b);
}
signed main() {
    RASHED
    int TC;
    cin>>TC;
    while(TC--)cout<<solve()<<endl;
    return 0;
}
/**
CASES:

*/

