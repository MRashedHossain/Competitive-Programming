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
    map<char,int> sf,tf;
    int sn = s.size(),tn = t.size();
    for(int i=1,j=2; i<sn; i++,j++) {
        if(sf[s[i]] == 0)sf[s[i]] = j;
    }
    for(int i=tn-2,j=2; i>=0; i--,j++) {
        if(tf[t[i]] == 0)tf[t[i]] = j;
    }
    int res = inf;
    for(int i=1; i<sn; i++) {
        if(sf[s[i]] && tf[s[i]])res = min(res,sf[s[i]] + tf[s[i]]);
    }
    if(res == inf)cout<<"-1"<<endl;
    else {
        for(int i=1; i<sn; i++) {
            if(sf[s[i]] && tf[s[i]] && sf[s[i]] + tf[s[i]] == res) {
                int u = sf[s[i]],v = tn - tf[s[i]];
                for(int j=0; j<u-1; j++)cout<<s[j];
                for(int j=v; j<tn; j++)cout<<t[j];
                cout<<endl;
                return;
            }
        }
    }
}
signed main() {
    RASHED
    int TC = 1;
    //cin>>TC;
    for(int i=1; i<=TC; i++)solve(i);
    return 0;
}
/**
CASES:
 
*/
 