#include<bits/stdc++.h>
using namespace std;

#define endl "\n"
#define RASHED ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
///#define show(x) cout << #x << " = " << x << endl
#define int long long int

void solve(int tc) {
    int n,res = 0;string s;
    cin>>n>>s;
    for(int i=0;i<n;i++){
        if(s[i] == '.'){
            res++;
            i+=2;
        }
    }
    cout<<"Case "<<tc<<": "<<res<<endl;
}
signed main() {
    RASHED
    int TC;
    cin>>TC;
    for(int i=1;i<=TC;i++)solve(i);
        return 0;
}
/**
CASES:

*/
