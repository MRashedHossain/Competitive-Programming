#include<bits/stdc++.h>
using namespace std;
 
#define endl "\n"
#define RASHED ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
///#define ll long long int
///#define inf 99999999999999999
///#define F first
///#define S second
///#define show(x) cout << #x << " : " << x << endl
///#define maxn 200100
 
bool solve() {
    int _s,_t;
    string s,t;
    cin>>_s>>_t>>s>>t;
    bool flg = true;
    for(int i=0; i<_s-1; i++) {
        if(s[i] == s[i+1])flg = false;
    }
    if(flg)return flg;
    for (int i=0; i<_t-1; i++) {
        if(t[i] == t[i+1])return false;
    }
    for(int i=0; i<_s-1; i++) {
        if(s[i] == s[i+1]){
            if(t[0] != t[_t-1] || s[i] == t[0] || s[i+1] == t[_t-1])return false;
        }
    }
    return true;
}
int main() {
    RASHED
    int tc;
    cin>>tc;
    while(tc--) {
        cout<<(solve()?"Yes":"No")<<endl;
    }
    return 0;
}
 