#include<bits/stdc++.h>
using namespace std;

#define endl "\n"
#define RASHED ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);

///#define int long long int
///#define show(x) cout << #x << " = " << x << endl
///#define maxn 200100

void solve(int tc) {
    int n,res = 0;cin>>n;
    map<int,int> f;
    for(int i=0;i<n;i++){
        int x;cin>>x;
        f[x]++;
    }
    for(auto i:f){
        res+=((i.second)/3);
    }
    cout<<res<<endl;
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

