#include<bits/stdc++.h>
using namespace std;
 
#define endl "\n"
#define RASHED ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
///#define int long long int
map<char,char> L,R;
string Q = "qwertyuiop",A = "asdfghjkl;",Z = "zxcvbnm,./";
 
void setup() {
    for(int i=1; i<Q.size(); i++)R[Q[i]] =  Q[i-1];
    for(int i=1; i<A.size(); i++)R[A[i]] =  A[i-1];
    for(int i=1; i<Z.size(); i++)R[Z[i]] =  Z[i-1];
    for(int i=0; i<Q.size()-1; i++)L[Q[i]] =  Q[i+1];
    for(int i=0; i<A.size()-1; i++)L[A[i]] =  A[i+1];
    for(int i=0; i<Z.size()-1; i++)L[Z[i]] =  Z[i+1];
}
void solve() {
    char c;
    string S = "",s;
    cin>>c>>s;
    if(c == 'R') {
        for(int i=0; i<s.size(); i++)S.push_back(R[s[i]]);
    } else {
        for(int i=0; i<s.size(); i++)S.push_back(L[s[i]]);
    }
    cout<<S<<endl;
}
int32_t main() {
    RASHED
    setup();
    solve();
    return 0;
}
 