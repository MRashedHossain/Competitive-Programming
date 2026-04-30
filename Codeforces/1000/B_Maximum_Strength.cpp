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
    string s,t;cin>>s>>t;
    int sn = s.size(),tn = t.size();
    if(sn<tn){
        while(s.size()<t.size())s = '0'+s;
    }
    int res = 0,cng = -1;
    for(int i=0;i<tn;i++){
        if(s[i]-'0'<t[i]-'0'){
            cng = i;break;
        }
    }
    ///show(cng);
    if(cng == -1){
        cout<<0<<endl;
        return;
    }
    if(cng == tn-1){
        for(int i=0;i<tn;i++){
            int ss = s[i] - '0',tt = t[i] - '0';
            res += abs(ss-tt);
        }
        cout<<res<<endl;
        return;
    }
    int x = s[cng] - '0',y = t[cng] - '0';
    res += abs(x - y);
    for(int i=cng+1;i<tn;i++)res+=9;
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