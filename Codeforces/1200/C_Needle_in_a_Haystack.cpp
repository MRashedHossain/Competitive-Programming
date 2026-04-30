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
 
void solve(int tc) {
    string s,t;
    cin>>s>>t;
    int sn = s.size(),tn = t.size();
    map<char,int> f;
    for(auto i:t)f[i]++;
    for(auto i:s) {
        f[i]--;
        if(f[i] < 0) {
            cout<<"Impossible"<<endl;
            return;
        }
    }
    string sor = "",res = "";
    for(auto &[c,n]:f) {
        for(int i=0; i<n; i++)sor+=c;
    }
    int i = 0,j = 0,sorn = sor.size();
    while(i < sn || j < sorn) {
        if(i < sn && (j == sorn || s[i] <= sor[j])) res.push_back(s[i++]);
        else res.push_back(sor[j++]);
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