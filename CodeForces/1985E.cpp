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
vector<int> divi(int n) {
    set<int> s;
    for(int i=1; i<=sqrt(n)+2; i++) {
        if(n%i == 0) {
            s.insert(i);
            s.insert(n/i);
        }
    }
    vector<int> v = {s.begin(),s.end()};
    return v;
}
void solve(int tc) {
    int x,y,z,KK,res = 0;cin>>x>>y>>z>>KK;
    vector<int> div = divi(KK);
    for(auto i:div)cout<<i<<" ";
    cout<<endl;
    int n = div.size();
    for(int i=0; i<n; i++) {
        for(int j=i; j<n; j++) {
            for(int k=j; k<n; k++) {
                if(div[i]*div[j]*div[k] == KK){
                    if(div[i] <= x && div[j] <= y && div[k] <= z){
                        if(div[i]<x)res+=((x+div[i]-1)/div[i]);
                        if(div[j]<y)res+=((y+div[j]-1)/div[j]);
                        if(div[k]<z)res+=((z+div[k]-1)/div[k]);
                    }
                }
            }
        }
    }
    cout<<res<<endl;
}
signed main() {
    RASHED
    int TC = 1;
    cin>>TC;
    for(int i=1; i<=TC; i++)solve(i);
    return 0;
}
/**
CASES:

*/

