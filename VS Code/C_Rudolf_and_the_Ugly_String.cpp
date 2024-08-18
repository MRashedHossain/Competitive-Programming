#include<bits/stdc++.h>
using namespace std;

#define endl "\n"
#define RASHED ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
///#define show(x) cout << #x << " = " << x << endl
///#define int long long int

void solve() {
    int n,res = 0;string s;cin>>n>>s;
    for(int i=0;i<s.size()-1;i++){
        string ss = s.substr(i,3);
        if(ss == "map" || ss == "pie"){
            res++;
            i+=2;
        }
    }
    cout<<res<<endl;
}
signed main() {
    RASHED
    int TC;
    cin>>TC;
    while(TC--)solve();
    return 0;
}

