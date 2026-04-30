#include<bits/stdc++.h>
using namespace std;
 
#define endl "\n"
#define RASHED ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
///#define int long long int
 
void solve() {
    string s,t,ss="",tt="";cin>>s>>t;
    int _s = s.size(),_t = t.size();
    int lc = (_s*_t)/__gcd(_s,_t);
    for(int i=0;i<lc/_s;i++)ss+=s;
    for(int i=0;i<lc/_t;i++)tt+=t;
    ///cout<<ss<<" "<<tt<<endl;
    if(ss == tt){
        cout<<ss<<endl;return;
    }
    cout<<-1<<endl;
    return;
}
int32_t main() {
    RASHED
    int tc;
    cin>>tc;
    while(tc--)solve();
    return 0;
}
 