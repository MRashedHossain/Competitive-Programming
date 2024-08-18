#include<bits/stdc++.h>
using namespace std;

#define endl "\n"
#define RASHED ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
///#define show(x) cout << #x << " = " << x << endl
///#define int long long int

int solve() {
    int a,b,c;cin>>a>>b>>c;
    int res = a;
    res+=(b/3);
    int ex = b%3;
    if(!ex){
        res+=(c+2)/3;
        return res;
    }
    if(ex+c<3)return -1;
    res+=(ex+c+2)/3;
    return res;
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

