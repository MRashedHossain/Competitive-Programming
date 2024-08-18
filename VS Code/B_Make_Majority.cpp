#include<bits/stdc++.h>
using namespace std;

#define RASHED ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
#define endl "\n"
#define int long long int

#define show(x) cout << #x << " = " << x << endl
#define inf (int)1e17
#define maxn 100010

#define F first
#define S second

bool solve(int tc) {
    int n;string s;cin>>n>>s;
    vector<int> v;
    int zero = 0,oo = 0,zz = 0;
    for(int i=0;i<n;i++){
        if(s[i] == '1'){
            if(zero){
                v.push_back(0);
                v.push_back(1);
                zero = 0;
            }
            else {
                v.push_back(1);
            }
        }
        else zero++;
    }
    if(zero)v.push_back(0);
//    for(auto i:v)cout<<i<<" ";
//    cout<<endl;
    for(auto i:v){
        if(i == 0)zz++;
        else oo++;
    }
    return oo>zz;
}
signed main() {
    RASHED
    int TC = 1;
    cin>>TC;
    for(int i=1; i<=TC; i++)cout<<(solve(i)?"Yes":"No")<<endl;
    return 0;
}
/**
CASES:

*/

