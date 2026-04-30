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
    string s,t;
    cin>>s>>t;
    vector<int> u,d;
    int sn = s.size(),tn = t.size();
    int i = 0,j = 0;
    while(i<sn || j<tn) {
        int now = 0,ii = i,jj = j;
        if(s[i] != t[j])return false;
        if(ii<sn)while(s[ii] == s[i] && i<sn)now++,ii++;
        u.push_back(now);
        now = 0;
        while(t[jj] == t[j] && j<tn)now++,jj++;
        i = ii;
        j = jj;
        d.push_back(now);
        if((i>=sn && j<tn))return false;
    }
    if(u.size() != d.size())return false;
    for(int i=0; i<u.size(); i++) {
        int ll = u[i],rr = (2*u[i]);
        if(d[i]>=ll && d[i]<=rr)continue;
        else return false;
    }
    return true;
}
signed main() {
    RASHED
    int TC = 1;
    cin>>TC;
    for(int i=1; i<=TC; i++)cout<<(solve(i)?"YES":"NO")<<endl;
    return 0;
}
/**
CASES:
 
*/